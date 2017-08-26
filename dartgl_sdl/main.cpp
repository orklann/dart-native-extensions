#include <string.h>
#include <stdlib.h>

#include "include/dart_api.h"
//#include "include/dart_native_api.h"

#include "dartgl_sdl.h"

Dart_NativeFunction ResolveName(Dart_Handle name, int argc, bool* auto_setup_scope);

DART_EXPORT Dart_Handle dartgl_sdl_Init(Dart_Handle parent_library) {
  if (Dart_IsError(parent_library)) { return parent_library; }

  init_resolver();

  Dart_NativeEntrySymbol symbol = NULL;
  Dart_Handle result_code = Dart_SetNativeResolver(parent_library, ResolveName, symbol);
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
