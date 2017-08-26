#include "string.h"
#include "include/dart_api.h"
#include "include/dart_native_api.h"

#include "dartgl-dyn.h"

Dart_NativeFunction resolver(const char* cname) {
  Dart_NativeFunction result = NULL;
  if (strcmp("dyncall", cname) == 0) result = dDynCall;
  return result;
}
