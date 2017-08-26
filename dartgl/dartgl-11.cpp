#if _WINDOWS
#include <windows.h>
#include "gl/gl.h"
#else
#include "GL/glx.h"
#endif

#include "include/dart_api.h"
#include "include/dart_native_api.h"

// GL_VERSION_1_0
void dglCullFace(Dart_NativeArguments arguments) {
  Dart_EnterScope();
  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t argNative0;
  Dart_IntegerToInt64(arg0, &argNative0);

  glCullFace((GLenum)argNative0);
  Dart_ExitScope();
}
// GL_VERSION_1_0
void dglFrontFace(Dart_NativeArguments arguments) {
  Dart_EnterScope();
  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t argNative0;
  Dart_IntegerToInt64(arg0, &argNative0);

  glFrontFace((GLenum)argNative0);
  Dart_ExitScope();
}
// GL_VERSION_1_0
void dglHint(Dart_NativeArguments arguments) {
  Dart_EnterScope();
  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t argNative0;
  Dart_IntegerToInt64(arg0, &argNative0);
  Dart_Handle arg1 = Dart_GetNativeArgument(arguments, 1);
  int64_t argNative1;
  Dart_IntegerToInt64(arg1, &argNative1);

  glHint((GLenum)argNative0, (GLenum)argNative1);
  Dart_ExitScope();
}
// GL_VERSION_1_0
void dglLineWidth(Dart_NativeArguments arguments) {
  Dart_EnterScope();
  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  double argNative0;
  Dart_DoubleValue(arg0, &argNative0);

  glLineWidth((GLfloat)argNative0);
  Dart_ExitScope();
}
// GL_VERSION_1_0
void dglPointSize(Dart_NativeArguments arguments) {
  Dart_EnterScope();
  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  double argNative0;
  Dart_DoubleValue(arg0, &argNative0);

  glPointSize((GLfloat)argNative0);
  Dart_ExitScope();
}
// GL_VERSION_1_0
void dglPolygonMode(Dart_NativeArguments arguments) {
  Dart_EnterScope();
  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t argNative0;
  Dart_IntegerToInt64(arg0, &argNative0);
  Dart_Handle arg1 = Dart_GetNativeArgument(arguments, 1);
  int64_t argNative1;
  Dart_IntegerToInt64(arg1, &argNative1);

  glPolygonMode((GLenum)argNative0, (GLenum)argNative1);
  Dart_ExitScope();
}
// GL_VERSION_1_0
void dglScissor(Dart_NativeArguments arguments) {
  Dart_EnterScope();
  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t argNative0;
  Dart_IntegerToInt64(arg0, &argNative0);
  Dart_Handle arg1 = Dart_GetNativeArgument(arguments, 1);
  int64_t argNative1;
  Dart_IntegerToInt64(arg1, &argNative1);
  Dart_Handle arg2 = Dart_GetNativeArgument(arguments, 2);
  int64_t argNative2;
  Dart_IntegerToInt64(arg2, &argNative2);
  Dart_Handle arg3 = Dart_GetNativeArgument(arguments, 3);
  int64_t argNative3;
  Dart_IntegerToInt64(arg3, &argNative3);

  glScissor((GLint)argNative0, (GLint)argNative1, (GLsizei)argNative2, (GLsizei)argNative3);
  Dart_ExitScope();
}
// GL_VERSION_1_0
void dglTexParameterf(Dart_NativeArguments arguments) {
  Dart_EnterScope();
  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t argNative0;
  Dart_IntegerToInt64(arg0, &argNative0);
  Dart_Handle arg1 = Dart_GetNativeArgument(arguments, 1);
  int64_t argNative1;
  Dart_IntegerToInt64(arg1, &argNative1);
  Dart_Handle arg2 = Dart_GetNativeArgument(arguments, 2);
  double argNative2;
  Dart_DoubleValue(arg2, &argNative2);

  glTexParameterf((GLenum)argNative0, (GLenum)argNative1, (GLfloat)argNative2);
  Dart_ExitScope();
}
// GL_VERSION_1_0
void dglTexParameterfv(Dart_NativeArguments arguments) {
  Dart_EnterScope();
  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t argNative0;
  Dart_IntegerToInt64(arg0, &argNative0);
  Dart_Handle arg1 = Dart_GetNativeArgument(arguments, 1);
  int64_t argNative1;
  Dart_IntegerToInt64(arg1, &argNative1);
  Dart_Handle arg2 = Dart_GetNativeArgument(arguments, 2);
  void* argNative2 = NULL;
  if (!Dart_IsNull(arg2)) {
    if (Dart_IsInteger(arg2)) {
      int64_t argNative2int;
      Dart_IntegerToInt64(arg2, (int64_t*)&argNative2int);
      argNative2 = (void*)argNative2int;
    } else {
      intptr_t length2 = 0;
      Dart_TypedData_Type type2 = Dart_TypedData_kFloat32;
      Dart_TypedDataAcquireData(arg2, &type2, &argNative2, &length2);
    }
  }

  glTexParameterfv((GLenum)argNative0, (GLenum)argNative1, (const GLfloat *)argNative2);
  Dart_TypedDataReleaseData(arg2);
  Dart_ExitScope();
}
// GL_VERSION_1_0
void dglTexParameteri(Dart_NativeArguments arguments) {
  Dart_EnterScope();
  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t argNative0;
  Dart_IntegerToInt64(arg0, &argNative0);
  Dart_Handle arg1 = Dart_GetNativeArgument(arguments, 1);
  int64_t argNative1;
  Dart_IntegerToInt64(arg1, &argNative1);
  Dart_Handle arg2 = Dart_GetNativeArgument(arguments, 2);
  int64_t argNative2;
  Dart_IntegerToInt64(arg2, &argNative2);

  glTexParameteri((GLenum)argNative0, (GLenum)argNative1, (GLint)argNative2);
  Dart_ExitScope();
}
// GL_VERSION_1_0
void dglTexParameteriv(Dart_NativeArguments arguments) {
  Dart_EnterScope();
  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t argNative0;
  Dart_IntegerToInt64(arg0, &argNative0);
  Dart_Handle arg1 = Dart_GetNativeArgument(arguments, 1);
  int64_t argNative1;
  Dart_IntegerToInt64(arg1, &argNative1);
  Dart_Handle arg2 = Dart_GetNativeArgument(arguments, 2);
  void* argNative2 = NULL;
  if (!Dart_IsNull(arg2)) {
    if (Dart_IsInteger(arg2)) {
      int64_t argNative2int;
      Dart_IntegerToInt64(arg2, (int64_t*)&argNative2int);
      argNative2 = (void*)argNative2int;
    } else {
      intptr_t length2 = 0;
      Dart_TypedData_Type type2 = Dart_TypedData_kInt32;
      Dart_TypedDataAcquireData(arg2, &type2, &argNative2, &length2);
    }
  }

  glTexParameteriv((GLenum)argNative0, (GLenum)argNative1, (const GLint *)argNative2);
  Dart_TypedDataReleaseData(arg2);
  Dart_ExitScope();
}
// GL_VERSION_1_0
void dglTexImage1D(Dart_NativeArguments arguments) {
  Dart_EnterScope();
  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t argNative0;
  Dart_IntegerToInt64(arg0, &argNative0);
  Dart_Handle arg1 = Dart_GetNativeArgument(arguments, 1);
  int64_t argNative1;
  Dart_IntegerToInt64(arg1, &argNative1);
  Dart_Handle arg2 = Dart_GetNativeArgument(arguments, 2);
  int64_t argNative2;
  Dart_IntegerToInt64(arg2, &argNative2);
  Dart_Handle arg3 = Dart_GetNativeArgument(arguments, 3);
  int64_t argNative3;
  Dart_IntegerToInt64(arg3, &argNative3);
  Dart_Handle arg4 = Dart_GetNativeArgument(arguments, 4);
  int64_t argNative4;
  Dart_IntegerToInt64(arg4, &argNative4);
  Dart_Handle arg5 = Dart_GetNativeArgument(arguments, 5);
  int64_t argNative5;
  Dart_IntegerToInt64(arg5, &argNative5);
  Dart_Handle arg6 = Dart_GetNativeArgument(arguments, 6);
  int64_t argNative6;
  Dart_IntegerToInt64(arg6, &argNative6);
  Dart_Handle arg7 = Dart_GetNativeArgument(arguments, 7);
  void* argNative7 = NULL;
  if (!Dart_IsNull(arg7)) {
    if (Dart_IsInteger(arg7)) {
      int64_t argNative7int;
      Dart_IntegerToInt64(arg7, (int64_t*)&argNative7int);
      argNative7 = (void*)argNative7int;
    } else {
      intptr_t length7 = 0;
      Dart_TypedData_Type type7 = Dart_TypedData_kByteData;
      Dart_TypedDataAcquireData(arg7, &type7, &argNative7, &length7);
    }
  }

  glTexImage1D((GLenum)argNative0, (GLint)argNative1, (GLint)argNative2, (GLsizei)argNative3, (GLint)argNative4, (GLenum)argNative5, (GLenum)argNative6, (const void *)argNative7);
  Dart_TypedDataReleaseData(arg7);
  Dart_ExitScope();
}
// GL_VERSION_1_0
void dglTexImage2D(Dart_NativeArguments arguments) {
  Dart_EnterScope();
  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t argNative0;
  Dart_IntegerToInt64(arg0, &argNative0);
  Dart_Handle arg1 = Dart_GetNativeArgument(arguments, 1);
  int64_t argNative1;
  Dart_IntegerToInt64(arg1, &argNative1);
  Dart_Handle arg2 = Dart_GetNativeArgument(arguments, 2);
  int64_t argNative2;
  Dart_IntegerToInt64(arg2, &argNative2);
  Dart_Handle arg3 = Dart_GetNativeArgument(arguments, 3);
  int64_t argNative3;
  Dart_IntegerToInt64(arg3, &argNative3);
  Dart_Handle arg4 = Dart_GetNativeArgument(arguments, 4);
  int64_t argNative4;
  Dart_IntegerToInt64(arg4, &argNative4);
  Dart_Handle arg5 = Dart_GetNativeArgument(arguments, 5);
  int64_t argNative5;
  Dart_IntegerToInt64(arg5, &argNative5);
  Dart_Handle arg6 = Dart_GetNativeArgument(arguments, 6);
  int64_t argNative6;
  Dart_IntegerToInt64(arg6, &argNative6);
  Dart_Handle arg7 = Dart_GetNativeArgument(arguments, 7);
  int64_t argNative7;
  Dart_IntegerToInt64(arg7, &argNative7);
  Dart_Handle arg8 = Dart_GetNativeArgument(arguments, 8);
  void* argNative8 = NULL;
  if (!Dart_IsNull(arg8)) {
    if (Dart_IsInteger(arg8)) {
      int64_t argNative8int;
      Dart_IntegerToInt64(arg8, (int64_t*)&argNative8int);
      argNative8 = (void*)argNative8int;
    } else {
      intptr_t length8 = 0;
      Dart_TypedData_Type type8 = Dart_TypedData_kByteData;
      Dart_TypedDataAcquireData(arg8, &type8, &argNative8, &length8);
    }
  }

  glTexImage2D((GLenum)argNative0, (GLint)argNative1, (GLint)argNative2, (GLsizei)argNative3, (GLsizei)argNative4, (GLint)argNative5, (GLenum)argNative6, (GLenum)argNative7, (const void *)argNative8);
  Dart_TypedDataReleaseData(arg8);
  Dart_ExitScope();
}
// GL_VERSION_1_0
void dglDrawBuffer(Dart_NativeArguments arguments) {
  Dart_EnterScope();
  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t argNative0;
  Dart_IntegerToInt64(arg0, &argNative0);

  glDrawBuffer((GLenum)argNative0);
  Dart_ExitScope();
}
// GL_VERSION_1_0
void dglClear(Dart_NativeArguments arguments) {
  Dart_EnterScope();
  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t argNative0;
  Dart_IntegerToInt64(arg0, &argNative0);

  glClear((GLbitfield)argNative0);
  Dart_ExitScope();
}
// GL_VERSION_1_0
void dglClearColor(Dart_NativeArguments arguments) {
  Dart_EnterScope();
  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  double argNative0;
  Dart_DoubleValue(arg0, &argNative0);
  Dart_Handle arg1 = Dart_GetNativeArgument(arguments, 1);
  double argNative1;
  Dart_DoubleValue(arg1, &argNative1);
  Dart_Handle arg2 = Dart_GetNativeArgument(arguments, 2);
  double argNative2;
  Dart_DoubleValue(arg2, &argNative2);
  Dart_Handle arg3 = Dart_GetNativeArgument(arguments, 3);
  double argNative3;
  Dart_DoubleValue(arg3, &argNative3);

  glClearColor((GLfloat)argNative0, (GLfloat)argNative1, (GLfloat)argNative2, (GLfloat)argNative3);
  Dart_ExitScope();
}
// GL_VERSION_1_0
void dglClearStencil(Dart_NativeArguments arguments) {
  Dart_EnterScope();
  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t argNative0;
  Dart_IntegerToInt64(arg0, &argNative0);

  glClearStencil((GLint)argNative0);
  Dart_ExitScope();
}
// GL_VERSION_1_0
void dglClearDepth(Dart_NativeArguments arguments) {
  Dart_EnterScope();
  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  double argNative0;
  Dart_DoubleValue(arg0, &argNative0);

  glClearDepth((GLdouble)argNative0);
  Dart_ExitScope();
}
// GL_VERSION_1_0
void dglStencilMask(Dart_NativeArguments arguments) {
  Dart_EnterScope();
  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t argNative0;
  Dart_IntegerToInt64(arg0, &argNative0);

  glStencilMask((GLuint)argNative0);
  Dart_ExitScope();
}
// GL_VERSION_1_0
void dglColorMask(Dart_NativeArguments arguments) {
  Dart_EnterScope();
  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  bool argNative0;
  Dart_BooleanValue(arg0, &argNative0);
  Dart_Handle arg1 = Dart_GetNativeArgument(arguments, 1);
  bool argNative1;
  Dart_BooleanValue(arg1, &argNative1);
  Dart_Handle arg2 = Dart_GetNativeArgument(arguments, 2);
  bool argNative2;
  Dart_BooleanValue(arg2, &argNative2);
  Dart_Handle arg3 = Dart_GetNativeArgument(arguments, 3);
  bool argNative3;
  Dart_BooleanValue(arg3, &argNative3);

  glColorMask((GLboolean)argNative0, (GLboolean)argNative1, (GLboolean)argNative2, (GLboolean)argNative3);
  Dart_ExitScope();
}
// GL_VERSION_1_0
void dglDepthMask(Dart_NativeArguments arguments) {
  Dart_EnterScope();
  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  bool argNative0;
  Dart_BooleanValue(arg0, &argNative0);

  glDepthMask((GLboolean)argNative0);
  Dart_ExitScope();
}
// GL_VERSION_1_0
void dglDisable(Dart_NativeArguments arguments) {
  Dart_EnterScope();
  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t argNative0;
  Dart_IntegerToInt64(arg0, &argNative0);

  glDisable((GLenum)argNative0);
  Dart_ExitScope();
}
// GL_VERSION_1_0
void dglEnable(Dart_NativeArguments arguments) {
  Dart_EnterScope();
  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t argNative0;
  Dart_IntegerToInt64(arg0, &argNative0);

  glEnable((GLenum)argNative0);
  Dart_ExitScope();
}
// GL_VERSION_1_0
void dglFinish(Dart_NativeArguments arguments) {
  Dart_EnterScope();

  glFinish();
  Dart_ExitScope();
}
// GL_VERSION_1_0
void dglFlush(Dart_NativeArguments arguments) {
  Dart_EnterScope();

  glFlush();
  Dart_ExitScope();
}
// GL_VERSION_1_0
void dglBlendFunc(Dart_NativeArguments arguments) {
  Dart_EnterScope();
  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t argNative0;
  Dart_IntegerToInt64(arg0, &argNative0);
  Dart_Handle arg1 = Dart_GetNativeArgument(arguments, 1);
  int64_t argNative1;
  Dart_IntegerToInt64(arg1, &argNative1);

  glBlendFunc((GLenum)argNative0, (GLenum)argNative1);
  Dart_ExitScope();
}
// GL_VERSION_1_0
void dglLogicOp(Dart_NativeArguments arguments) {
  Dart_EnterScope();
  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t argNative0;
  Dart_IntegerToInt64(arg0, &argNative0);

  glLogicOp((GLenum)argNative0);
  Dart_ExitScope();
}
// GL_VERSION_1_0
void dglStencilFunc(Dart_NativeArguments arguments) {
  Dart_EnterScope();
  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t argNative0;
  Dart_IntegerToInt64(arg0, &argNative0);
  Dart_Handle arg1 = Dart_GetNativeArgument(arguments, 1);
  int64_t argNative1;
  Dart_IntegerToInt64(arg1, &argNative1);
  Dart_Handle arg2 = Dart_GetNativeArgument(arguments, 2);
  int64_t argNative2;
  Dart_IntegerToInt64(arg2, &argNative2);

  glStencilFunc((GLenum)argNative0, (GLint)argNative1, (GLuint)argNative2);
  Dart_ExitScope();
}
// GL_VERSION_1_0
void dglStencilOp(Dart_NativeArguments arguments) {
  Dart_EnterScope();
  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t argNative0;
  Dart_IntegerToInt64(arg0, &argNative0);
  Dart_Handle arg1 = Dart_GetNativeArgument(arguments, 1);
  int64_t argNative1;
  Dart_IntegerToInt64(arg1, &argNative1);
  Dart_Handle arg2 = Dart_GetNativeArgument(arguments, 2);
  int64_t argNative2;
  Dart_IntegerToInt64(arg2, &argNative2);

  glStencilOp((GLenum)argNative0, (GLenum)argNative1, (GLenum)argNative2);
  Dart_ExitScope();
}
// GL_VERSION_1_0
void dglDepthFunc(Dart_NativeArguments arguments) {
  Dart_EnterScope();
  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t argNative0;
  Dart_IntegerToInt64(arg0, &argNative0);

  glDepthFunc((GLenum)argNative0);
  Dart_ExitScope();
}
// GL_VERSION_1_0
void dglPixelStoref(Dart_NativeArguments arguments) {
  Dart_EnterScope();
  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t argNative0;
  Dart_IntegerToInt64(arg0, &argNative0);
  Dart_Handle arg1 = Dart_GetNativeArgument(arguments, 1);
  double argNative1;
  Dart_DoubleValue(arg1, &argNative1);

  glPixelStoref((GLenum)argNative0, (GLfloat)argNative1);
  Dart_ExitScope();
}
// GL_VERSION_1_0
void dglPixelStorei(Dart_NativeArguments arguments) {
  Dart_EnterScope();
  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t argNative0;
  Dart_IntegerToInt64(arg0, &argNative0);
  Dart_Handle arg1 = Dart_GetNativeArgument(arguments, 1);
  int64_t argNative1;
  Dart_IntegerToInt64(arg1, &argNative1);

  glPixelStorei((GLenum)argNative0, (GLint)argNative1);
  Dart_ExitScope();
}
// GL_VERSION_1_0
void dglReadBuffer(Dart_NativeArguments arguments) {
  Dart_EnterScope();
  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t argNative0;
  Dart_IntegerToInt64(arg0, &argNative0);

  glReadBuffer((GLenum)argNative0);
  Dart_ExitScope();
}
// GL_VERSION_1_0
void dglReadPixels(Dart_NativeArguments arguments) {
  Dart_EnterScope();
  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t argNative0;
  Dart_IntegerToInt64(arg0, &argNative0);
  Dart_Handle arg1 = Dart_GetNativeArgument(arguments, 1);
  int64_t argNative1;
  Dart_IntegerToInt64(arg1, &argNative1);
  Dart_Handle arg2 = Dart_GetNativeArgument(arguments, 2);
  int64_t argNative2;
  Dart_IntegerToInt64(arg2, &argNative2);
  Dart_Handle arg3 = Dart_GetNativeArgument(arguments, 3);
  int64_t argNative3;
  Dart_IntegerToInt64(arg3, &argNative3);
  Dart_Handle arg4 = Dart_GetNativeArgument(arguments, 4);
  int64_t argNative4;
  Dart_IntegerToInt64(arg4, &argNative4);
  Dart_Handle arg5 = Dart_GetNativeArgument(arguments, 5);
  int64_t argNative5;
  Dart_IntegerToInt64(arg5, &argNative5);
  Dart_Handle arg6 = Dart_GetNativeArgument(arguments, 6);
  void* argNative6 = NULL;
  if (!Dart_IsNull(arg6)) {
    if (Dart_IsInteger(arg6)) {
      int64_t argNative6int;
      Dart_IntegerToInt64(arg6, (int64_t*)&argNative6int);
      argNative6 = (void*)argNative6int;
    } else {
      intptr_t length6 = 0;
      Dart_TypedData_Type type6 = Dart_TypedData_kByteData;
      Dart_TypedDataAcquireData(arg6, &type6, &argNative6, &length6);
    }
  }

  glReadPixels((GLint)argNative0, (GLint)argNative1, (GLsizei)argNative2, (GLsizei)argNative3, (GLenum)argNative4, (GLenum)argNative5, (void *)argNative6);
  Dart_TypedDataReleaseData(arg6);
  Dart_ExitScope();
}
// GL_VERSION_1_0
void dglGetBooleanv(Dart_NativeArguments arguments) {
  Dart_EnterScope();
  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t argNative0;
  Dart_IntegerToInt64(arg0, &argNative0);
  Dart_Handle arg1 = Dart_GetNativeArgument(arguments, 1);
  void* argNative1 = NULL;
  if (!Dart_IsNull(arg1)) {
    if (Dart_IsInteger(arg1)) {
      int64_t argNative1int;
      Dart_IntegerToInt64(arg1, (int64_t*)&argNative1int);
      argNative1 = (void*)argNative1int;
    } else {
      intptr_t length1 = 0;
      Dart_TypedData_Type type1 = Dart_TypedData_kByteData;
      Dart_TypedDataAcquireData(arg1, &type1, &argNative1, &length1);
    }
  }

  glGetBooleanv((GLenum)argNative0, (GLboolean *)argNative1);
  Dart_TypedDataReleaseData(arg1);
  Dart_ExitScope();
}
// GL_VERSION_1_0
void dglGetDoublev(Dart_NativeArguments arguments) {
  Dart_EnterScope();
  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t argNative0;
  Dart_IntegerToInt64(arg0, &argNative0);
  Dart_Handle arg1 = Dart_GetNativeArgument(arguments, 1);
  void* argNative1 = NULL;
  if (!Dart_IsNull(arg1)) {
    if (Dart_IsInteger(arg1)) {
      int64_t argNative1int;
      Dart_IntegerToInt64(arg1, (int64_t*)&argNative1int);
      argNative1 = (void*)argNative1int;
    } else {
      intptr_t length1 = 0;
      Dart_TypedData_Type type1 = Dart_TypedData_kFloat64;
      Dart_TypedDataAcquireData(arg1, &type1, &argNative1, &length1);
    }
  }

  glGetDoublev((GLenum)argNative0, (GLdouble *)argNative1);
  Dart_TypedDataReleaseData(arg1);
  Dart_ExitScope();
}
// GL_VERSION_1_0
void dglGetError(Dart_NativeArguments arguments) {
  Dart_EnterScope();

  GLenum result = glGetError();
  Dart_SetReturnValue(arguments, Dart_NewInteger((int64_t)result));
  Dart_ExitScope();
}
// GL_VERSION_1_0
void dglGetFloatv(Dart_NativeArguments arguments) {
  Dart_EnterScope();
  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t argNative0;
  Dart_IntegerToInt64(arg0, &argNative0);
  Dart_Handle arg1 = Dart_GetNativeArgument(arguments, 1);
  void* argNative1 = NULL;
  if (!Dart_IsNull(arg1)) {
    if (Dart_IsInteger(arg1)) {
      int64_t argNative1int;
      Dart_IntegerToInt64(arg1, (int64_t*)&argNative1int);
      argNative1 = (void*)argNative1int;
    } else {
      intptr_t length1 = 0;
      Dart_TypedData_Type type1 = Dart_TypedData_kFloat32;
      Dart_TypedDataAcquireData(arg1, &type1, &argNative1, &length1);
    }
  }

  glGetFloatv((GLenum)argNative0, (GLfloat *)argNative1);
  Dart_TypedDataReleaseData(arg1);
  Dart_ExitScope();
}
// GL_VERSION_1_0
void dglGetIntegerv(Dart_NativeArguments arguments) {
  Dart_EnterScope();
  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t argNative0;
  Dart_IntegerToInt64(arg0, &argNative0);
  Dart_Handle arg1 = Dart_GetNativeArgument(arguments, 1);
  void* argNative1 = NULL;
  if (!Dart_IsNull(arg1)) {
    if (Dart_IsInteger(arg1)) {
      int64_t argNative1int;
      Dart_IntegerToInt64(arg1, (int64_t*)&argNative1int);
      argNative1 = (void*)argNative1int;
    } else {
      intptr_t length1 = 0;
      Dart_TypedData_Type type1 = Dart_TypedData_kInt32;
      Dart_TypedDataAcquireData(arg1, &type1, &argNative1, &length1);
    }
  }

  glGetIntegerv((GLenum)argNative0, (GLint *)argNative1);
  Dart_TypedDataReleaseData(arg1);
  Dart_ExitScope();
}
// GL_VERSION_1_0
void dglGetString(Dart_NativeArguments arguments) {
  Dart_EnterScope();
  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t argNative0;
  Dart_IntegerToInt64(arg0, &argNative0);

  const GLubyte * result = glGetString((GLenum)argNative0);
  Dart_SetReturnValue(arguments, Dart_NewStringFromCString((const char *)result));
  Dart_ExitScope();
}
// GL_VERSION_1_0
void dglGetTexImage(Dart_NativeArguments arguments) {
  Dart_EnterScope();
  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t argNative0;
  Dart_IntegerToInt64(arg0, &argNative0);
  Dart_Handle arg1 = Dart_GetNativeArgument(arguments, 1);
  int64_t argNative1;
  Dart_IntegerToInt64(arg1, &argNative1);
  Dart_Handle arg2 = Dart_GetNativeArgument(arguments, 2);
  int64_t argNative2;
  Dart_IntegerToInt64(arg2, &argNative2);
  Dart_Handle arg3 = Dart_GetNativeArgument(arguments, 3);
  int64_t argNative3;
  Dart_IntegerToInt64(arg3, &argNative3);
  Dart_Handle arg4 = Dart_GetNativeArgument(arguments, 4);
  void* argNative4 = NULL;
  if (!Dart_IsNull(arg4)) {
    if (Dart_IsInteger(arg4)) {
      int64_t argNative4int;
      Dart_IntegerToInt64(arg4, (int64_t*)&argNative4int);
      argNative4 = (void*)argNative4int;
    } else {
      intptr_t length4 = 0;
      Dart_TypedData_Type type4 = Dart_TypedData_kByteData;
      Dart_TypedDataAcquireData(arg4, &type4, &argNative4, &length4);
    }
  }

  glGetTexImage((GLenum)argNative0, (GLint)argNative1, (GLenum)argNative2, (GLenum)argNative3, (void *)argNative4);
  Dart_TypedDataReleaseData(arg4);
  Dart_ExitScope();
}
// GL_VERSION_1_0
void dglGetTexParameterfv(Dart_NativeArguments arguments) {
  Dart_EnterScope();
  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t argNative0;
  Dart_IntegerToInt64(arg0, &argNative0);
  Dart_Handle arg1 = Dart_GetNativeArgument(arguments, 1);
  int64_t argNative1;
  Dart_IntegerToInt64(arg1, &argNative1);
  Dart_Handle arg2 = Dart_GetNativeArgument(arguments, 2);
  void* argNative2 = NULL;
  if (!Dart_IsNull(arg2)) {
    if (Dart_IsInteger(arg2)) {
      int64_t argNative2int;
      Dart_IntegerToInt64(arg2, (int64_t*)&argNative2int);
      argNative2 = (void*)argNative2int;
    } else {
      intptr_t length2 = 0;
      Dart_TypedData_Type type2 = Dart_TypedData_kFloat32;
      Dart_TypedDataAcquireData(arg2, &type2, &argNative2, &length2);
    }
  }

  glGetTexParameterfv((GLenum)argNative0, (GLenum)argNative1, (GLfloat *)argNative2);
  Dart_TypedDataReleaseData(arg2);
  Dart_ExitScope();
}
// GL_VERSION_1_0
void dglGetTexParameteriv(Dart_NativeArguments arguments) {
  Dart_EnterScope();
  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t argNative0;
  Dart_IntegerToInt64(arg0, &argNative0);
  Dart_Handle arg1 = Dart_GetNativeArgument(arguments, 1);
  int64_t argNative1;
  Dart_IntegerToInt64(arg1, &argNative1);
  Dart_Handle arg2 = Dart_GetNativeArgument(arguments, 2);
  void* argNative2 = NULL;
  if (!Dart_IsNull(arg2)) {
    if (Dart_IsInteger(arg2)) {
      int64_t argNative2int;
      Dart_IntegerToInt64(arg2, (int64_t*)&argNative2int);
      argNative2 = (void*)argNative2int;
    } else {
      intptr_t length2 = 0;
      Dart_TypedData_Type type2 = Dart_TypedData_kInt32;
      Dart_TypedDataAcquireData(arg2, &type2, &argNative2, &length2);
    }
  }

  glGetTexParameteriv((GLenum)argNative0, (GLenum)argNative1, (GLint *)argNative2);
  Dart_TypedDataReleaseData(arg2);
  Dart_ExitScope();
}
// GL_VERSION_1_0
void dglGetTexLevelParameterfv(Dart_NativeArguments arguments) {
  Dart_EnterScope();
  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t argNative0;
  Dart_IntegerToInt64(arg0, &argNative0);
  Dart_Handle arg1 = Dart_GetNativeArgument(arguments, 1);
  int64_t argNative1;
  Dart_IntegerToInt64(arg1, &argNative1);
  Dart_Handle arg2 = Dart_GetNativeArgument(arguments, 2);
  int64_t argNative2;
  Dart_IntegerToInt64(arg2, &argNative2);
  Dart_Handle arg3 = Dart_GetNativeArgument(arguments, 3);
  void* argNative3 = NULL;
  if (!Dart_IsNull(arg3)) {
    if (Dart_IsInteger(arg3)) {
      int64_t argNative3int;
      Dart_IntegerToInt64(arg3, (int64_t*)&argNative3int);
      argNative3 = (void*)argNative3int;
    } else {
      intptr_t length3 = 0;
      Dart_TypedData_Type type3 = Dart_TypedData_kFloat32;
      Dart_TypedDataAcquireData(arg3, &type3, &argNative3, &length3);
    }
  }

  glGetTexLevelParameterfv((GLenum)argNative0, (GLint)argNative1, (GLenum)argNative2, (GLfloat *)argNative3);
  Dart_TypedDataReleaseData(arg3);
  Dart_ExitScope();
}
// GL_VERSION_1_0
void dglGetTexLevelParameteriv(Dart_NativeArguments arguments) {
  Dart_EnterScope();
  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t argNative0;
  Dart_IntegerToInt64(arg0, &argNative0);
  Dart_Handle arg1 = Dart_GetNativeArgument(arguments, 1);
  int64_t argNative1;
  Dart_IntegerToInt64(arg1, &argNative1);
  Dart_Handle arg2 = Dart_GetNativeArgument(arguments, 2);
  int64_t argNative2;
  Dart_IntegerToInt64(arg2, &argNative2);
  Dart_Handle arg3 = Dart_GetNativeArgument(arguments, 3);
  void* argNative3 = NULL;
  if (!Dart_IsNull(arg3)) {
    if (Dart_IsInteger(arg3)) {
      int64_t argNative3int;
      Dart_IntegerToInt64(arg3, (int64_t*)&argNative3int);
      argNative3 = (void*)argNative3int;
    } else {
      intptr_t length3 = 0;
      Dart_TypedData_Type type3 = Dart_TypedData_kInt32;
      Dart_TypedDataAcquireData(arg3, &type3, &argNative3, &length3);
    }
  }

  glGetTexLevelParameteriv((GLenum)argNative0, (GLint)argNative1, (GLenum)argNative2, (GLint *)argNative3);
  Dart_TypedDataReleaseData(arg3);
  Dart_ExitScope();
}
// GL_VERSION_1_0
void dglIsEnabled(Dart_NativeArguments arguments) {
  Dart_EnterScope();
  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t argNative0;
  Dart_IntegerToInt64(arg0, &argNative0);

  GLboolean result = glIsEnabled((GLenum)argNative0);
  Dart_SetReturnValue(arguments, Dart_NewBoolean(result));
  Dart_ExitScope();
}
// GL_VERSION_1_0
void dglDepthRange(Dart_NativeArguments arguments) {
  Dart_EnterScope();
  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  double argNative0;
  Dart_DoubleValue(arg0, &argNative0);
  Dart_Handle arg1 = Dart_GetNativeArgument(arguments, 1);
  double argNative1;
  Dart_DoubleValue(arg1, &argNative1);

  glDepthRange((GLdouble)argNative0, (GLdouble)argNative1);
  Dart_ExitScope();
}
// GL_VERSION_1_0
void dglViewport(Dart_NativeArguments arguments) {
  Dart_EnterScope();
  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t argNative0;
  Dart_IntegerToInt64(arg0, &argNative0);
  Dart_Handle arg1 = Dart_GetNativeArgument(arguments, 1);
  int64_t argNative1;
  Dart_IntegerToInt64(arg1, &argNative1);
  Dart_Handle arg2 = Dart_GetNativeArgument(arguments, 2);
  int64_t argNative2;
  Dart_IntegerToInt64(arg2, &argNative2);
  Dart_Handle arg3 = Dart_GetNativeArgument(arguments, 3);
  int64_t argNative3;
  Dart_IntegerToInt64(arg3, &argNative3);

  glViewport((GLint)argNative0, (GLint)argNative1, (GLsizei)argNative2, (GLsizei)argNative3);
  Dart_ExitScope();
}
// GL_VERSION_1_1
void dglDrawArrays(Dart_NativeArguments arguments) {
  Dart_EnterScope();
  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t argNative0;
  Dart_IntegerToInt64(arg0, &argNative0);
  Dart_Handle arg1 = Dart_GetNativeArgument(arguments, 1);
  int64_t argNative1;
  Dart_IntegerToInt64(arg1, &argNative1);
  Dart_Handle arg2 = Dart_GetNativeArgument(arguments, 2);
  int64_t argNative2;
  Dart_IntegerToInt64(arg2, &argNative2);

  glDrawArrays((GLenum)argNative0, (GLint)argNative1, (GLsizei)argNative2);
  Dart_ExitScope();
}
// GL_VERSION_1_1
void dglDrawElements(Dart_NativeArguments arguments) {
  Dart_EnterScope();
  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t argNative0;
  Dart_IntegerToInt64(arg0, &argNative0);
  Dart_Handle arg1 = Dart_GetNativeArgument(arguments, 1);
  int64_t argNative1;
  Dart_IntegerToInt64(arg1, &argNative1);
  Dart_Handle arg2 = Dart_GetNativeArgument(arguments, 2);
  int64_t argNative2;
  Dart_IntegerToInt64(arg2, &argNative2);
  Dart_Handle arg3 = Dart_GetNativeArgument(arguments, 3);
  void* argNative3 = NULL;
  if (!Dart_IsNull(arg3)) {
    if (Dart_IsInteger(arg3)) {
      int64_t argNative3int;
      Dart_IntegerToInt64(arg3, (int64_t*)&argNative3int);
      argNative3 = (void*)argNative3int;
    } else {
      intptr_t length3 = 0;
      Dart_TypedData_Type type3 = Dart_TypedData_kByteData;
      Dart_TypedDataAcquireData(arg3, &type3, &argNative3, &length3);
    }
  }

  glDrawElements((GLenum)argNative0, (GLsizei)argNative1, (GLenum)argNative2, (const void *)argNative3);
  Dart_TypedDataReleaseData(arg3);
  Dart_ExitScope();
}
// GL_VERSION_1_1
void dglGetPointerv(Dart_NativeArguments arguments) {
  Dart_EnterScope();
  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t argNative0;
  Dart_IntegerToInt64(arg0, &argNative0);
  Dart_Handle arg1 = Dart_GetNativeArgument(arguments, 1);
  void* argNative1 = NULL;
  if (!Dart_IsNull(arg1)) {
    if (Dart_IsInteger(arg1)) {
      int64_t argNative1int;
      Dart_IntegerToInt64(arg1, (int64_t*)&argNative1int);
      argNative1 = (void*)argNative1int;
    } else {
      intptr_t length1 = 0;
      Dart_TypedData_Type type1 = Dart_TypedData_kByteData;
      Dart_TypedDataAcquireData(arg1, &type1, &argNative1, &length1);
    }
  }

  glGetPointerv((GLenum)argNative0, (void **)argNative1);
  Dart_TypedDataReleaseData(arg1);
  Dart_ExitScope();
}
// GL_VERSION_1_1
void dglPolygonOffset(Dart_NativeArguments arguments) {
  Dart_EnterScope();
  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  double argNative0;
  Dart_DoubleValue(arg0, &argNative0);
  Dart_Handle arg1 = Dart_GetNativeArgument(arguments, 1);
  double argNative1;
  Dart_DoubleValue(arg1, &argNative1);

  glPolygonOffset((GLfloat)argNative0, (GLfloat)argNative1);
  Dart_ExitScope();
}
// GL_VERSION_1_1
void dglCopyTexImage1D(Dart_NativeArguments arguments) {
  Dart_EnterScope();
  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t argNative0;
  Dart_IntegerToInt64(arg0, &argNative0);
  Dart_Handle arg1 = Dart_GetNativeArgument(arguments, 1);
  int64_t argNative1;
  Dart_IntegerToInt64(arg1, &argNative1);
  Dart_Handle arg2 = Dart_GetNativeArgument(arguments, 2);
  int64_t argNative2;
  Dart_IntegerToInt64(arg2, &argNative2);
  Dart_Handle arg3 = Dart_GetNativeArgument(arguments, 3);
  int64_t argNative3;
  Dart_IntegerToInt64(arg3, &argNative3);
  Dart_Handle arg4 = Dart_GetNativeArgument(arguments, 4);
  int64_t argNative4;
  Dart_IntegerToInt64(arg4, &argNative4);
  Dart_Handle arg5 = Dart_GetNativeArgument(arguments, 5);
  int64_t argNative5;
  Dart_IntegerToInt64(arg5, &argNative5);
  Dart_Handle arg6 = Dart_GetNativeArgument(arguments, 6);
  int64_t argNative6;
  Dart_IntegerToInt64(arg6, &argNative6);

  glCopyTexImage1D((GLenum)argNative0, (GLint)argNative1, (GLenum)argNative2, (GLint)argNative3, (GLint)argNative4, (GLsizei)argNative5, (GLint)argNative6);
  Dart_ExitScope();
}
// GL_VERSION_1_1
void dglCopyTexImage2D(Dart_NativeArguments arguments) {
  Dart_EnterScope();
  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t argNative0;
  Dart_IntegerToInt64(arg0, &argNative0);
  Dart_Handle arg1 = Dart_GetNativeArgument(arguments, 1);
  int64_t argNative1;
  Dart_IntegerToInt64(arg1, &argNative1);
  Dart_Handle arg2 = Dart_GetNativeArgument(arguments, 2);
  int64_t argNative2;
  Dart_IntegerToInt64(arg2, &argNative2);
  Dart_Handle arg3 = Dart_GetNativeArgument(arguments, 3);
  int64_t argNative3;
  Dart_IntegerToInt64(arg3, &argNative3);
  Dart_Handle arg4 = Dart_GetNativeArgument(arguments, 4);
  int64_t argNative4;
  Dart_IntegerToInt64(arg4, &argNative4);
  Dart_Handle arg5 = Dart_GetNativeArgument(arguments, 5);
  int64_t argNative5;
  Dart_IntegerToInt64(arg5, &argNative5);
  Dart_Handle arg6 = Dart_GetNativeArgument(arguments, 6);
  int64_t argNative6;
  Dart_IntegerToInt64(arg6, &argNative6);
  Dart_Handle arg7 = Dart_GetNativeArgument(arguments, 7);
  int64_t argNative7;
  Dart_IntegerToInt64(arg7, &argNative7);

  glCopyTexImage2D((GLenum)argNative0, (GLint)argNative1, (GLenum)argNative2, (GLint)argNative3, (GLint)argNative4, (GLsizei)argNative5, (GLsizei)argNative6, (GLint)argNative7);
  Dart_ExitScope();
}
// GL_VERSION_1_1
void dglCopyTexSubImage1D(Dart_NativeArguments arguments) {
  Dart_EnterScope();
  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t argNative0;
  Dart_IntegerToInt64(arg0, &argNative0);
  Dart_Handle arg1 = Dart_GetNativeArgument(arguments, 1);
  int64_t argNative1;
  Dart_IntegerToInt64(arg1, &argNative1);
  Dart_Handle arg2 = Dart_GetNativeArgument(arguments, 2);
  int64_t argNative2;
  Dart_IntegerToInt64(arg2, &argNative2);
  Dart_Handle arg3 = Dart_GetNativeArgument(arguments, 3);
  int64_t argNative3;
  Dart_IntegerToInt64(arg3, &argNative3);
  Dart_Handle arg4 = Dart_GetNativeArgument(arguments, 4);
  int64_t argNative4;
  Dart_IntegerToInt64(arg4, &argNative4);
  Dart_Handle arg5 = Dart_GetNativeArgument(arguments, 5);
  int64_t argNative5;
  Dart_IntegerToInt64(arg5, &argNative5);

  glCopyTexSubImage1D((GLenum)argNative0, (GLint)argNative1, (GLint)argNative2, (GLint)argNative3, (GLint)argNative4, (GLsizei)argNative5);
  Dart_ExitScope();
}
// GL_VERSION_1_1
void dglCopyTexSubImage2D(Dart_NativeArguments arguments) {
  Dart_EnterScope();
  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t argNative0;
  Dart_IntegerToInt64(arg0, &argNative0);
  Dart_Handle arg1 = Dart_GetNativeArgument(arguments, 1);
  int64_t argNative1;
  Dart_IntegerToInt64(arg1, &argNative1);
  Dart_Handle arg2 = Dart_GetNativeArgument(arguments, 2);
  int64_t argNative2;
  Dart_IntegerToInt64(arg2, &argNative2);
  Dart_Handle arg3 = Dart_GetNativeArgument(arguments, 3);
  int64_t argNative3;
  Dart_IntegerToInt64(arg3, &argNative3);
  Dart_Handle arg4 = Dart_GetNativeArgument(arguments, 4);
  int64_t argNative4;
  Dart_IntegerToInt64(arg4, &argNative4);
  Dart_Handle arg5 = Dart_GetNativeArgument(arguments, 5);
  int64_t argNative5;
  Dart_IntegerToInt64(arg5, &argNative5);
  Dart_Handle arg6 = Dart_GetNativeArgument(arguments, 6);
  int64_t argNative6;
  Dart_IntegerToInt64(arg6, &argNative6);
  Dart_Handle arg7 = Dart_GetNativeArgument(arguments, 7);
  int64_t argNative7;
  Dart_IntegerToInt64(arg7, &argNative7);

  glCopyTexSubImage2D((GLenum)argNative0, (GLint)argNative1, (GLint)argNative2, (GLint)argNative3, (GLint)argNative4, (GLint)argNative5, (GLsizei)argNative6, (GLsizei)argNative7);
  Dart_ExitScope();
}
// GL_VERSION_1_1
void dglTexSubImage1D(Dart_NativeArguments arguments) {
  Dart_EnterScope();
  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t argNative0;
  Dart_IntegerToInt64(arg0, &argNative0);
  Dart_Handle arg1 = Dart_GetNativeArgument(arguments, 1);
  int64_t argNative1;
  Dart_IntegerToInt64(arg1, &argNative1);
  Dart_Handle arg2 = Dart_GetNativeArgument(arguments, 2);
  int64_t argNative2;
  Dart_IntegerToInt64(arg2, &argNative2);
  Dart_Handle arg3 = Dart_GetNativeArgument(arguments, 3);
  int64_t argNative3;
  Dart_IntegerToInt64(arg3, &argNative3);
  Dart_Handle arg4 = Dart_GetNativeArgument(arguments, 4);
  int64_t argNative4;
  Dart_IntegerToInt64(arg4, &argNative4);
  Dart_Handle arg5 = Dart_GetNativeArgument(arguments, 5);
  int64_t argNative5;
  Dart_IntegerToInt64(arg5, &argNative5);
  Dart_Handle arg6 = Dart_GetNativeArgument(arguments, 6);
  void* argNative6 = NULL;
  if (!Dart_IsNull(arg6)) {
    if (Dart_IsInteger(arg6)) {
      int64_t argNative6int;
      Dart_IntegerToInt64(arg6, (int64_t*)&argNative6int);
      argNative6 = (void*)argNative6int;
    } else {
      intptr_t length6 = 0;
      Dart_TypedData_Type type6 = Dart_TypedData_kByteData;
      Dart_TypedDataAcquireData(arg6, &type6, &argNative6, &length6);
    }
  }

  glTexSubImage1D((GLenum)argNative0, (GLint)argNative1, (GLint)argNative2, (GLsizei)argNative3, (GLenum)argNative4, (GLenum)argNative5, (const void *)argNative6);
  Dart_TypedDataReleaseData(arg6);
  Dart_ExitScope();
}
// GL_VERSION_1_1
void dglTexSubImage2D(Dart_NativeArguments arguments) {
  Dart_EnterScope();
  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t argNative0;
  Dart_IntegerToInt64(arg0, &argNative0);
  Dart_Handle arg1 = Dart_GetNativeArgument(arguments, 1);
  int64_t argNative1;
  Dart_IntegerToInt64(arg1, &argNative1);
  Dart_Handle arg2 = Dart_GetNativeArgument(arguments, 2);
  int64_t argNative2;
  Dart_IntegerToInt64(arg2, &argNative2);
  Dart_Handle arg3 = Dart_GetNativeArgument(arguments, 3);
  int64_t argNative3;
  Dart_IntegerToInt64(arg3, &argNative3);
  Dart_Handle arg4 = Dart_GetNativeArgument(arguments, 4);
  int64_t argNative4;
  Dart_IntegerToInt64(arg4, &argNative4);
  Dart_Handle arg5 = Dart_GetNativeArgument(arguments, 5);
  int64_t argNative5;
  Dart_IntegerToInt64(arg5, &argNative5);
  Dart_Handle arg6 = Dart_GetNativeArgument(arguments, 6);
  int64_t argNative6;
  Dart_IntegerToInt64(arg6, &argNative6);
  Dart_Handle arg7 = Dart_GetNativeArgument(arguments, 7);
  int64_t argNative7;
  Dart_IntegerToInt64(arg7, &argNative7);
  Dart_Handle arg8 = Dart_GetNativeArgument(arguments, 8);
  void* argNative8 = NULL;
  if (!Dart_IsNull(arg8)) {
    if (Dart_IsInteger(arg8)) {
      int64_t argNative8int;
      Dart_IntegerToInt64(arg8, (int64_t*)&argNative8int);
      argNative8 = (void*)argNative8int;
    } else {
      intptr_t length8 = 0;
      Dart_TypedData_Type type8 = Dart_TypedData_kByteData;
      Dart_TypedDataAcquireData(arg8, &type8, &argNative8, &length8);
    }
  }

  glTexSubImage2D((GLenum)argNative0, (GLint)argNative1, (GLint)argNative2, (GLint)argNative3, (GLsizei)argNative4, (GLsizei)argNative5, (GLenum)argNative6, (GLenum)argNative7, (const void *)argNative8);
  Dart_TypedDataReleaseData(arg8);
  Dart_ExitScope();
}
// GL_VERSION_1_1
void dglBindTexture(Dart_NativeArguments arguments) {
  Dart_EnterScope();
  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t argNative0;
  Dart_IntegerToInt64(arg0, &argNative0);
  Dart_Handle arg1 = Dart_GetNativeArgument(arguments, 1);
  int64_t argNative1;
  Dart_IntegerToInt64(arg1, &argNative1);

  glBindTexture((GLenum)argNative0, (GLuint)argNative1);
  Dart_ExitScope();
}
// GL_VERSION_1_1
void dglDeleteTextures(Dart_NativeArguments arguments) {
  Dart_EnterScope();
  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t argNative0;
  Dart_IntegerToInt64(arg0, &argNative0);
  Dart_Handle arg1 = Dart_GetNativeArgument(arguments, 1);
  void* argNative1 = NULL;
  if (!Dart_IsNull(arg1)) {
    if (Dart_IsInteger(arg1)) {
      int64_t argNative1int;
      Dart_IntegerToInt64(arg1, (int64_t*)&argNative1int);
      argNative1 = (void*)argNative1int;
    } else {
      intptr_t length1 = 0;
      Dart_TypedData_Type type1 = Dart_TypedData_kUint32;
      Dart_TypedDataAcquireData(arg1, &type1, &argNative1, &length1);
    }
  }

  glDeleteTextures((GLsizei)argNative0, (const GLuint *)argNative1);
  Dart_TypedDataReleaseData(arg1);
  Dart_ExitScope();
}
// GL_VERSION_1_1
void dglGenTextures(Dart_NativeArguments arguments) {
  Dart_EnterScope();
  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t argNative0;
  Dart_IntegerToInt64(arg0, &argNative0);
  Dart_Handle arg1 = Dart_GetNativeArgument(arguments, 1);
  void* argNative1 = NULL;
  if (!Dart_IsNull(arg1)) {
    if (Dart_IsInteger(arg1)) {
      int64_t argNative1int;
      Dart_IntegerToInt64(arg1, (int64_t*)&argNative1int);
      argNative1 = (void*)argNative1int;
    } else {
      intptr_t length1 = 0;
      Dart_TypedData_Type type1 = Dart_TypedData_kUint32;
      Dart_TypedDataAcquireData(arg1, &type1, &argNative1, &length1);
    }
  }

  glGenTextures((GLsizei)argNative0, (GLuint *)argNative1);
  Dart_TypedDataReleaseData(arg1);
  Dart_ExitScope();
}
// GL_VERSION_1_1
void dglIsTexture(Dart_NativeArguments arguments) {
  Dart_EnterScope();
  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t argNative0;
  Dart_IntegerToInt64(arg0, &argNative0);

  GLboolean result = glIsTexture((GLuint)argNative0);
  Dart_SetReturnValue(arguments, Dart_NewBoolean(result));
  Dart_ExitScope();
}