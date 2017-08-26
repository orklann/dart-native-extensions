#include "include/dart_api.h"
#include "include/dart_native_api.h"
#include "dyncall.h"
#include "dynload.h"
#include "args.h"

void callFunction(Dart_NativeArguments arguments){
  Dart_EnterScope();

  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t vm;
  Dart_IntegerToInt64(arg0, &vm);

  Dart_Handle arg1 = Dart_GetNativeArgument(arguments, 1);
  int64_t pointer;
  Dart_IntegerToInt64(arg1, &pointer);

  Dart_Handle arg2 = Dart_GetNativeArgument(arguments, 2);
  int64_t sig;
  Dart_IntegerToInt64(arg2, &sig);
    
  switch (sig) {
    case C_BOOL:
	{
      DCbool result = dcCallBool((DCCallVM*) vm, (DCpointer)pointer);
      Dart_SetReturnValue(arguments, Dart_NewBoolean(result));
      break;
    }
    case C_CHAR:
    case C_UCHAR:
	{
      DCchar result = dcCallChar((DCCallVM*) vm, (DCpointer)pointer);
      Dart_SetReturnValue(arguments, Dart_NewInteger(result));
      break;
    }
    case C_SHORT:
    case C_USHORT:
	{
      DCshort result = dcCallShort((DCCallVM*) vm, (DCpointer)pointer);
      Dart_SetReturnValue(arguments, Dart_NewInteger(result));
      break;
    }
    case C_INT:
    case C_UINT:
	{
      DCint result = dcCallInt((DCCallVM*) vm, (DCpointer)pointer);
      Dart_SetReturnValue(arguments, Dart_NewInteger(result));
      break;
    }
    case C_LONG:
    case C_ULONG:
	{
      DClong result = dcCallLong((DCCallVM*) vm, (DCpointer)pointer);
      Dart_SetReturnValue(arguments, Dart_NewInteger(result));
      break;
    }
    case C_LONGLONG:
    case C_ULONGLONG:
	{
      DClong result = dcCallLongLong((DCCallVM*) vm, (DCpointer)pointer);
      Dart_SetReturnValue(arguments, Dart_NewInteger(result));
      break;
    }
    case C_FLOAT:
	{
      DCfloat result = dcCallFloat((DCCallVM*) vm, (DCpointer)pointer);
      Dart_SetReturnValue(arguments, Dart_NewDouble(result));
      break;
    }
    case C_DOUBLE:
	{
      DCdouble result = dcCallDouble((DCCallVM*) vm, (DCpointer)pointer);
      Dart_SetReturnValue(arguments, Dart_NewDouble(result));
      break;
    }
    case C_POINTER:
	{
      DCpointer result = dcCallPointer((DCCallVM*) vm, (DCpointer)pointer);
      Dart_SetReturnValue(arguments, Dart_NewInteger((int64_t)result));
      break;
    }
    case C_STRING:
	{
      DCpointer result = dcCallPointer((DCCallVM*) vm, (DCpointer)pointer);
      Dart_SetReturnValue(arguments, Dart_NewStringFromCString((const char* )result));
      break;
    }
    case VOID:
	{
      dcCallVoid((DCCallVM*) vm, (DCpointer)pointer);
      break;
    }
  }

  Dart_ExitScope();
}
