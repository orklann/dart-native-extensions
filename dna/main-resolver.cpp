#include "string.h"
#include "include/dart_api.h"
#include "include/dart_native_api.h"

#include "args.h"
#include "calls.h"
#include "vm.h"
#include "lib.h"
#include "struct.h"

Dart_NativeFunction resolver(const char* cname) {
  Dart_NativeFunction result = NULL;

  if (strcmp("pushParameters", cname) == 0) return pushParameters;

  if (strcmp("getSizes", cname) == 0) return getSizes;
  if (strcmp("getPointer", cname) == 0) return getPointer;

  if (strcmp("callFunction", cname) == 0) return callFunction;

  if (strcmp("createCallVM", cname) == 0) return createVM;
  if (strcmp("freeCallVM", cname) == 0) return freeVM;
  if (strcmp("resetVM", cname) == 0) return resetVM;

  if (strcmp("loadLibrary", cname) == 0) return loadLibrary;
  if (strcmp("freeLibrary", cname) == 0) return freeLibrary;
  if (strcmp("findSymbol", cname) == 0) return findSymbol;

  return result;
}
