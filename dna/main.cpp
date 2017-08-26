#include <string.h>
#include <stdlib.h>

#include "include/dart_api.h"
#include "include/dart_native_api.h"

#include "main-resolver.h"

Dart_NativeFunction ResolveName(Dart_Handle name, int argc, bool* auto_setup_scope);

DART_EXPORT Dart_Handle dna_Init(Dart_Handle parent_library) {
  if (Dart_IsError(parent_library)) { return parent_library; }

  Dart_NativeEntrySymbol result = NULL;
  Dart_Handle result_code = Dart_SetNativeResolver(parent_library, ResolveName, result);
  if (Dart_IsError(result_code)) return result_code;

  return Dart_Null();
}


Dart_Handle HandleError(Dart_Handle handle) {
  if (Dart_IsError(handle)) Dart_PropagateError(handle);
  return handle;
}

Dart_NativeFunction ResolveName(Dart_Handle name, int num_of_arguments, bool* auto_setup_scope) {
  // If we fail, we return NULL, and Dart throws an exception.
  if (!Dart_IsString(name)) return NULL;
  Dart_NativeFunction result = NULL;
  const char* cname;
  HandleError(Dart_StringToCString(name, &cname));

  result = resolver(cname);

  return result;
}
