#if _WINDOWS
#include <windows.h>
#include "gl/gl.h"
#else
#include "GL/glx.h"
#endif

#include "include/dart_api.h"
#include "include/dart_native_api.h"

void dglCullFace(Dart_NativeArguments arguments);
void dglFrontFace(Dart_NativeArguments arguments);
void dglHint(Dart_NativeArguments arguments);
void dglLineWidth(Dart_NativeArguments arguments);
void dglPointSize(Dart_NativeArguments arguments);
void dglPolygonMode(Dart_NativeArguments arguments);
void dglScissor(Dart_NativeArguments arguments);
void dglTexParameterf(Dart_NativeArguments arguments);
void dglTexParameterfv(Dart_NativeArguments arguments);
void dglTexParameteri(Dart_NativeArguments arguments);
void dglTexParameteriv(Dart_NativeArguments arguments);
void dglTexImage1D(Dart_NativeArguments arguments);
void dglTexImage2D(Dart_NativeArguments arguments);
void dglDrawBuffer(Dart_NativeArguments arguments);
void dglClear(Dart_NativeArguments arguments);
void dglClearColor(Dart_NativeArguments arguments);
void dglClearStencil(Dart_NativeArguments arguments);
void dglClearDepth(Dart_NativeArguments arguments);
void dglStencilMask(Dart_NativeArguments arguments);
void dglColorMask(Dart_NativeArguments arguments);
void dglDepthMask(Dart_NativeArguments arguments);
void dglDisable(Dart_NativeArguments arguments);
void dglEnable(Dart_NativeArguments arguments);
void dglFinish(Dart_NativeArguments arguments);
void dglFlush(Dart_NativeArguments arguments);
void dglBlendFunc(Dart_NativeArguments arguments);
void dglLogicOp(Dart_NativeArguments arguments);
void dglStencilFunc(Dart_NativeArguments arguments);
void dglStencilOp(Dart_NativeArguments arguments);
void dglDepthFunc(Dart_NativeArguments arguments);
void dglPixelStoref(Dart_NativeArguments arguments);
void dglPixelStorei(Dart_NativeArguments arguments);
void dglReadBuffer(Dart_NativeArguments arguments);
void dglReadPixels(Dart_NativeArguments arguments);
void dglGetBooleanv(Dart_NativeArguments arguments);
void dglGetDoublev(Dart_NativeArguments arguments);
void dglGetError(Dart_NativeArguments arguments);
void dglGetFloatv(Dart_NativeArguments arguments);
void dglGetIntegerv(Dart_NativeArguments arguments);
void dglGetString(Dart_NativeArguments arguments);
void dglGetTexImage(Dart_NativeArguments arguments);
void dglGetTexParameterfv(Dart_NativeArguments arguments);
void dglGetTexParameteriv(Dart_NativeArguments arguments);
void dglGetTexLevelParameterfv(Dart_NativeArguments arguments);
void dglGetTexLevelParameteriv(Dart_NativeArguments arguments);
void dglIsEnabled(Dart_NativeArguments arguments);
void dglDepthRange(Dart_NativeArguments arguments);
void dglViewport(Dart_NativeArguments arguments);
void dglDrawArrays(Dart_NativeArguments arguments);
void dglDrawElements(Dart_NativeArguments arguments);
void dglGetPointerv(Dart_NativeArguments arguments);
void dglPolygonOffset(Dart_NativeArguments arguments);
void dglCopyTexImage1D(Dart_NativeArguments arguments);
void dglCopyTexImage2D(Dart_NativeArguments arguments);
void dglCopyTexSubImage1D(Dart_NativeArguments arguments);
void dglCopyTexSubImage2D(Dart_NativeArguments arguments);
void dglTexSubImage1D(Dart_NativeArguments arguments);
void dglTexSubImage2D(Dart_NativeArguments arguments);
void dglBindTexture(Dart_NativeArguments arguments);
void dglDeleteTextures(Dart_NativeArguments arguments);
void dglGenTextures(Dart_NativeArguments arguments);
void dglIsTexture(Dart_NativeArguments arguments);