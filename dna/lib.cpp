#include "include/dart_api.h"
#include "include/dart_native_api.h"
#include "dyncall.h"
#include "dynload.h"

void loadLibrary(Dart_NativeArguments arguments){
  Dart_EnterScope();

  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  const char* lib;
  Dart_StringToCString(arg0, &lib);

  DLLib * result = dlLoadLibrary(lib);

  Dart_SetReturnValue(arguments, Dart_NewInteger((int64_t) result));

  Dart_ExitScope();
}

void freeLibrary(Dart_NativeArguments arguments){
  Dart_EnterScope();

  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t pointer;
  Dart_IntegerToInt64(arg0, &pointer);

  dlFreeLibrary((DLLib *)pointer);

  Dart_ExitScope();
}

void findSymbol(Dart_NativeArguments arguments){
  Dart_EnterScope();

  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t pointer;
  Dart_IntegerToInt64(arg0, &pointer);

  Dart_Handle arg1 = Dart_GetNativeArgument(arguments, 1);
  const char* symbol;
  Dart_StringToCString(arg1, &symbol);

  void * result = dlFindSymbol((DLLib *)pointer, symbol);

  Dart_SetReturnValue(arguments, Dart_NewInteger((int64_t) result));

  Dart_ExitScope();
}

