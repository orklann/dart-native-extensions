#include "include/dart_api.h"
#include "include/dart_native_api.h"
#include "dyncall.h"
#include "dynload.h"

void createVM(Dart_NativeArguments arguments){
  Dart_EnterScope();

  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t size;
  Dart_IntegerToInt64(arg0, &size);

  DCCallVM* vm = dcNewCallVM(size);
  dcMode(vm, DC_CALL_C_DEFAULT);
  dcReset(vm);

  Dart_SetReturnValue(arguments, Dart_NewInteger((int64_t)vm));

  Dart_ExitScope();
}

void freeVM(Dart_NativeArguments arguments){
  Dart_EnterScope();

  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t vm;
  Dart_IntegerToInt64(arg0, &vm);

  dcFree((DCCallVM*) vm);

  Dart_ExitScope();
}

void resetVM(Dart_NativeArguments arguments){
  Dart_EnterScope();

  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t vm;
  Dart_IntegerToInt64(arg0, &vm);

  dcReset((DCCallVM*) vm);

  Dart_ExitScope();
}
