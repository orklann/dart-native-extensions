#include "include/dart_api.h"
#include "include/dart_native_api.h"
#include "dyncall.h"
#include "dynload.h"
#include "args.h"

void pushParameters(Dart_NativeArguments arguments){
  Dart_EnterScope();

  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t vm;
  Dart_IntegerToInt64(arg0, &vm);

  Dart_Handle arg1 = Dart_GetNativeArgument(arguments, 1);
  int64_t sig;  
  
  Dart_Handle arg2 = Dart_GetNativeArgument(arguments, 2);
  intptr_t argLength;
  Dart_ListLength(arg2, &argLength);

  for (int j = 0; j < argLength; j++)
  {
	Dart_Handle signature = Dart_ListGetAt(arg1, j);
    Dart_Handle item = Dart_ListGetAt(arg2, j);
	Dart_IntegerToInt64(signature, &sig);

    switch (sig) {
      case C_BOOL:
	  {
        bool value; Dart_BooleanValue(item, &value);
        dcArgBool((DCCallVM*) vm, (DCbool)value);
        break;
      }
      case C_CHAR:
      case C_UCHAR: 
	  case C_INT8:
	  {
        int64_t value; Dart_IntegerToInt64(item, &value);
        dcArgChar((DCCallVM*) vm, (DCchar)value);
        break;
      }
      case C_SHORT:
      case C_USHORT:
	  case C_INT16:
	  {
        int64_t value; Dart_IntegerToInt64(item, &value);
        dcArgShort((DCCallVM*) vm, (DCshort)value);
        break;
      }
      case C_INT:
      case C_UINT:
	  case C_INT32:
	  {
        int64_t value; Dart_IntegerToInt64(item, &value);
        dcArgInt((DCCallVM*) vm, (DCint)value);
        break;
      }
      case C_LONG:
      case C_ULONG:
	  {
        int64_t value; Dart_IntegerToInt64(item, &value);
        dcArgLong((DCCallVM*) vm, (DClong)value);
        break;
      }
      case C_LONGLONG:
      case C_ULONGLONG:
	  case C_INT64:
	  {
        int64_t value; Dart_IntegerToInt64(item, &value);
        dcArgLongLong((DCCallVM*) vm, (DClonglong)value);
        break;
      }
      case C_FLOAT:
	  {
        double value; Dart_DoubleValue(item, &value);
        dcArgFloat((DCCallVM*) vm, (DCfloat)value);
        break;
      }
      case C_DOUBLE:
	  {
        double value; Dart_DoubleValue(item, &value);
        dcArgDouble((DCCallVM*) vm, (DCdouble)value);
        break;
      }
      case C_POINTER:
	  {
        int64_t value; Dart_IntegerToInt64(item, &value);
        dcArgPointer((DCCallVM*) vm, (DCpointer)value);
        break;
      }
      case C_STRING:
	  {
        const char * value; Dart_StringToCString(item, &value);
         dcArgPointer((DCCallVM*) vm, (DCpointer)value);
        break;
      }
      case TYPEDDATA:
	  {
        void* value = nullptr;
        if (!Dart_IsNull(item)) {
          intptr_t length = 0;
          Dart_TypedData_Type type = Dart_GetTypeOfTypedData(item);
          Dart_TypedDataAcquireData(item, &type, &value, &length);
        }

        dcArgPointer((DCCallVM*) vm, (DCpointer)value);

        if (!Dart_IsNull(item)) {
          Dart_TypedDataReleaseData(item);
        }
        break;
      }
      case LISTINT:
	  {
        intptr_t argLength;
        Dart_ListLength(item, &argLength);
        int* value = new int[argLength];
        for (int k = 0; k < argLength; k++)
        {
          int64_t listItem;
          Dart_IntegerToInt64(Dart_ListGetAt(item, k), &listItem);
          value[k] = listItem;
        }

        dcArgPointer((DCCallVM*) vm, (DCpointer)value);
        break;
      }
      case LISTSTRING:
	  {
        intptr_t argLength;
        Dart_ListLength(item, &argLength);
        const char** value = new const char* [argLength];
        for (int k = 0; k < argLength; k++)
        {
          const char* listItem;
          Dart_StringToCString(Dart_ListGetAt(item, k), &listItem);
          value[k] = listItem;
        }

        dcArgPointer((DCCallVM*) vm, (DCpointer)value);
        break;
      }
      case C_STRUCT:{
        break;
      }
    }
  }


  Dart_ExitScope();
}
