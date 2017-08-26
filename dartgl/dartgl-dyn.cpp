#include "glcorearb.h"
#include "include/dart_api.h"
#include "include/dart_native_api.h"
#include "dyncall.h"
#include <string>
#include <map>

#if _WINDOWS
#include "Wingdi.h"
#include <windows.h>
#define glGetProcAddress(name) wglGetProcAddress(name)
#define log(text)

HMODULE module = LoadLibraryA("opengl32.dll");
#else
#include "GL/glx.h"
#include <syslog.h>
#define glGetProcAddress(name) glXGetProcAddress((const GLubyte *)name);
#define log(text) syslog(LOG_INFO, text);
#endif

std::map<std::string, void*> pointers;

void dDynCall(Dart_NativeArguments arguments){
  Dart_EnterScope();

  int count_args = Dart_GetNativeArgumentCount(arguments) - 2;

  Dart_Handle argName = Dart_GetNativeArgument(arguments, count_args);
  const char* name;
  Dart_StringToCString(argName, &name);

  Dart_Handle argSig = Dart_GetNativeArgument(arguments, count_args+1);
  const char* sig;
  Dart_StringToCString(argSig, &sig);

  DCCallVM* vm = dcNewCallVM(4096);
  dcMode(vm, DC_CALL_C_DEFAULT);
  dcReset(vm);

  for (int i = 0; i < count_args; i++) {
    Dart_Handle arg = Dart_GetNativeArgument(arguments, i);
    char type0 = sig[i*3+0];
    char type1 = sig[i*3+1];
    char type2 = sig[i*3+2];

    if (type0 == 'i' && type1 == '1' && type2 == 'b') {
      bool argNative;
      Dart_BooleanValue(arg, &argNative);
      dcArgBool(vm, argNative);
    }

    if (type0 == 'i' && type1 == '1' && type2 != 'b') {
      int64_t argNative;
      Dart_IntegerToInt64(arg, &argNative);
      dcArgChar(vm, argNative);
    }

    if (type0 == 'i' && type1 == '2') {
      int64_t argNative;
      Dart_IntegerToInt64(arg, &argNative);
      dcArgShort(vm, argNative);
    }

    if (type0 == 'i' && type1 == '4') {
      int64_t argNative;
      Dart_IntegerToInt64(arg, &argNative);
      dcArgInt(vm, argNative);
    }

    if (type0 == 'i' && type1 == '8') {
      int64_t argNative;
      Dart_IntegerToInt64(arg, &argNative);
      dcArgLong(vm, argNative);
    }

    if (type0 == 'f' && type1 == '4') {
      double argNative;
      Dart_DoubleValue(arg, &argNative);
      dcArgFloat(vm, (float)argNative);
    }

    if (type0 == 'f' && type1 == '8') {
      double argNative;
      Dart_DoubleValue(arg, &argNative);
      dcArgDouble(vm, argNative);
    }

    if (type0 == 't') {
      void* argNative = NULL;

      if (!Dart_IsNull(arg)) {
        intptr_t length = 0;
        Dart_TypedData_Type type = Dart_GetTypeOfTypedData(arg);
        Dart_TypedDataAcquireData(arg, &type, &argNative, &length);
      }

      dcArgPointer(vm, argNative);
    }

    if (type0 == 's'){
      const char* argNative;
      Dart_StringToCString(arg, &argNative);
      dcArgPointer(vm, (DCpointer)argNative);
    }

    if (type0 == 'l' && type1== 's'){
      intptr_t argLength;
      Dart_ListLength(arg, &argLength);
      const char** argNative = new const char* [argLength];
      for (int j = 0; j < argLength; j++)
      {
        const char* line;
        Dart_StringToCString(Dart_ListGetAt(arg, j), &line);
        argNative[j] = line;
      }
      dcArgPointer(vm, argNative);
    }
  }

  
  void* glFuncPointer = pointers[name];
  if (glFuncPointer == nullptr) {

	  glFuncPointer = (void *)glGetProcAddress(name);
#if _WINDOWS
	  if (glFuncPointer == nullptr) {
		  glFuncPointer = (void *)GetProcAddress(module, name);
	  }
#endif
  }

  char ret_type0 = sig[count_args*3+0];
  char ret_type1 = sig[count_args*3+1];
  char ret_type2 = sig[count_args*3+2];

  if (ret_type0 == 'v'){
    dcCallVoid(vm, (DCpointer)glFuncPointer);
  }

  if (ret_type0 == 'i' && (ret_type2 == 'n' || ret_type2 == 'p')){
    int result = dcCallInt(vm, (DCpointer)glFuncPointer);
	Dart_SetReturnValue(arguments, Dart_NewInteger((int64_t)result));
  }
  if (ret_type0 == 'i' && ret_type2 == 'b'){
    bool result = dcCallBool(vm, (DCpointer)glFuncPointer);
    Dart_SetReturnValue(arguments, Dart_NewBoolean(result));
  }
  if (ret_type0 == 't' && ret_type2 == 's'){
    const char* result = (const char*)dcCallPointer(vm, (DCpointer)glFuncPointer);
    Dart_SetReturnValue(arguments, Dart_NewStringFromCString(result));
  }

  for (int i = 0; i < count_args; i++) {
    Dart_Handle arg = Dart_GetNativeArgument(arguments, i);
    char type0 = sig[i*3+0];

    if (type0 == 't'){
      if (!Dart_IsNull(arg)) {
		  Dart_TypedDataReleaseData(arg);
      }
    }
  }

  dcFree(vm);
  Dart_ExitScope();
}

