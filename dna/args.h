#include "include/dart_api.h"
#include "include/dart_native_api.h"

/// Type constants
const int C_CHAR = 1;
const int C_UCHAR = 2;
const int C_SHORT = 3;
const int C_USHORT = 4;
const int C_INT = 5;
const int C_UINT = 6;
const int C_LONG = 7;
const int C_ULONG = 8;
const int C_LONGLONG = 9;
const int C_ULONGLONG = 10;
const int C_BOOL = 11;

const int C_INT8 = 20;
const int C_INT16 = 21;
const int C_INT32 = 22;
const int C_INT64 = 23;

const int C_FLOAT = 30;
const int C_DOUBLE = 31;

const int C_POINTER = 40;
const int C_STRUCT = 50;
const int C_STRING = 60;

const int VOID = 70;
const int TYPEDDATA = 80;
const int LISTINT = 90;
const int LISTSTRING = 100;

void pushParameters(Dart_NativeArguments arguments);