#include "include/dart_api.h"
#include "include/dart_native_api.h"
#include "dyncall.h"
#include "dynload.h"

void getSizes(Dart_NativeArguments arguments) {
	Dart_EnterScope();

	Dart_Handle list = Dart_NewList(10);
	Dart_ListSetAt(list, 0, Dart_NewInteger(sizeof(DCchar)));
	Dart_ListSetAt(list, 1, Dart_NewInteger(sizeof(DCshort)));
	Dart_ListSetAt(list, 2, Dart_NewInteger(sizeof(DCint)));
	Dart_ListSetAt(list, 3, Dart_NewInteger(sizeof(DClong)));
	Dart_ListSetAt(list, 4, Dart_NewInteger(sizeof(DClonglong)));
	Dart_ListSetAt(list, 5, Dart_NewInteger(sizeof(DCbool)));
	Dart_ListSetAt(list, 6, Dart_NewInteger(sizeof(DCfloat)));
	Dart_ListSetAt(list, 7, Dart_NewInteger(sizeof(DCdouble)));
	Dart_ListSetAt(list, 8, Dart_NewInteger(sizeof(DCpointer)));
	Dart_ListSetAt(list, 9, Dart_NewInteger(0));

	Dart_SetReturnValue(arguments, list);

	Dart_ExitScope();
}

void getPointer(Dart_NativeArguments arguments) {
	Dart_EnterScope();

	Dart_Handle typedData = Dart_GetNativeArgument(arguments, 0);
	void* value = nullptr;
	if (!Dart_IsNull(typedData)) {
		intptr_t length = 0;
		Dart_TypedData_Type type = Dart_GetTypeOfTypedData(typedData);
		Dart_TypedDataAcquireData(typedData, &type, &value, &length);
	}

	Dart_SetReturnValue(arguments, Dart_NewInteger((int64_t)&value));

	if (!Dart_IsNull(typedData)) {
		Dart_TypedDataReleaseData(typedData);
	}

	Dart_ExitScope();
}

