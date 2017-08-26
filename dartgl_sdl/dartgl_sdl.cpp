#include <string.h>
#include <stdlib.h>
#include <map>

#include "include/dart_api.h"
//#include "include/dart_native_api.h"

#include "SDL2/SDL.h"
#include "SDL2/SDL_video.h"
#include "SDL2/SDL_log.h"

struct ltstr
{
  bool operator()(const char* s1, const char* s2) const
  {
    return strcmp(s1, s2) < 0;
  }};

std::map<const char*, Dart_Handle, ltstr> classes;

Dart_Handle CreateDartObject(const char* name){

  Dart_Handle clazz = classes[name];
  if (clazz == NULL){
    Dart_Handle library = Dart_RootLibrary();
    if(Dart_IsError(library)) Dart_PropagateError(library);

    clazz = Dart_GetClass(library, Dart_NewStringFromCString(name));
    if(Dart_IsError(clazz)) Dart_PropagateError(clazz);
  }

  Dart_Handle object = Dart_New(clazz, Dart_Null(), 0, NULL);
  if(Dart_IsError(object)) Dart_PropagateError(object);

  return object;
}

void dSDL_Init(Dart_NativeArguments arguments) {
  Dart_EnterScope();

  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t pointer0;
  Dart_IntegerToInt64(arg0, &pointer0);

  int result = SDL_Init(pointer0);

  Dart_SetReturnValue(arguments, Dart_NewInteger((int64_t)result));
  Dart_ExitScope();
}

void dSDL_InitSubSystem(Dart_NativeArguments arguments) {
  Dart_EnterScope();

  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t pointer0;
  Dart_IntegerToInt64(arg0, &pointer0);

  int result = SDL_InitSubSystem(pointer0);

  Dart_SetReturnValue(arguments, Dart_NewInteger((int64_t)result));
  Dart_ExitScope();
}

void dSDL_QuitSubSystem(Dart_NativeArguments arguments) {
  Dart_EnterScope();

  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t pointer0;
  Dart_IntegerToInt64(arg0, &pointer0);

  SDL_QuitSubSystem(pointer0);
  Dart_ExitScope();
}

void dSDL_WasInit(Dart_NativeArguments arguments) {
  Dart_EnterScope();

  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t pointer0;
  Dart_IntegerToInt64(arg0, &pointer0);

  int result = SDL_WasInit(pointer0);

  Dart_SetReturnValue(arguments, Dart_NewInteger((int64_t)result));
  Dart_ExitScope();
}

void dSDL_Quit(Dart_NativeArguments arguments) {
  Dart_EnterScope();
  SDL_Quit();
  Dart_ExitScope();
}

void dSDL_CreateWindow(Dart_NativeArguments arguments) {
  Dart_EnterScope();

  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  const char* pointer0;
  Dart_StringToCString(arg0, &pointer0);
  Dart_Handle arg1 = Dart_GetNativeArgument(arguments, 1);
  int64_t pointer1;
  Dart_IntegerToInt64(arg1, &pointer1);
  Dart_Handle arg2 = Dart_GetNativeArgument(arguments, 2);
  int64_t pointer2;
  Dart_IntegerToInt64(arg2, &pointer2);
  Dart_Handle arg3 = Dart_GetNativeArgument(arguments, 3);
  int64_t pointer3;
  Dart_IntegerToInt64(arg3, &pointer3);
  Dart_Handle arg4 = Dart_GetNativeArgument(arguments, 4);
  int64_t pointer4;
  Dart_IntegerToInt64(arg4, &pointer4);
  Dart_Handle arg5 = Dart_GetNativeArgument(arguments, 5);
  int64_t pointer5;
  Dart_IntegerToInt64(arg5, &pointer5);

  SDL_Window* window = SDL_CreateWindow(pointer0, pointer1, pointer2, pointer3, pointer4,
    pointer5);



  Dart_Handle p = CreateDartObject("Pointer");


  Dart_SetField(p, Dart_NewStringFromCString("pointer"), Dart_NewInteger((intptr_t)window));

  Dart_SetReturnValue(arguments, p);

  Dart_ExitScope();
}

void dSDL_DestroyWindow(Dart_NativeArguments arguments) {
  Dart_EnterScope();

  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t pointer0;
  Dart_IntegerToInt64(Dart_GetField(arg0, Dart_NewStringFromCString("pointer")), &pointer0);

  SDL_DestroyWindow((SDL_Window*)pointer0);

  Dart_ExitScope();
}

void dSDL_ShowWindow(Dart_NativeArguments arguments) {
  Dart_EnterScope();

  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t pointer0;
  Dart_IntegerToInt64(Dart_GetField(arg0, Dart_NewStringFromCString("pointer")), &pointer0);

  SDL_ShowWindow((SDL_Window*)pointer0);

  Dart_ExitScope();
}

void dSDL_HideWindow(Dart_NativeArguments arguments) {
  Dart_EnterScope();

  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t pointer0;
  Dart_IntegerToInt64(Dart_GetField(arg0, Dart_NewStringFromCString("pointer")), &pointer0);

  SDL_HideWindow((SDL_Window*)pointer0);

  Dart_ExitScope();
}

void dSDL_RaiseWindow(Dart_NativeArguments arguments) {
  Dart_EnterScope();

  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t pointer0;
  Dart_IntegerToInt64(Dart_GetField(arg0, Dart_NewStringFromCString("pointer")), &pointer0);

  SDL_RaiseWindow((SDL_Window*)pointer0);

  Dart_ExitScope();
}

void dSDL_MaximizeWindow(Dart_NativeArguments arguments) {
  Dart_EnterScope();

  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t pointer0;
  Dart_IntegerToInt64(Dart_GetField(arg0, Dart_NewStringFromCString("pointer")), &pointer0);

  SDL_MaximizeWindow((SDL_Window*)pointer0);

  Dart_ExitScope();
}

void dSDL_MinimizeWindow(Dart_NativeArguments arguments) {
  Dart_EnterScope();

  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t pointer0;
  Dart_IntegerToInt64(Dart_GetField(arg0, Dart_NewStringFromCString("pointer")), &pointer0);

  SDL_MinimizeWindow((SDL_Window*)pointer0);

  Dart_ExitScope();
}

void dSDL_RestoreWindow(Dart_NativeArguments arguments) {
  Dart_EnterScope();

  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t pointer0;
  Dart_IntegerToInt64(Dart_GetField(arg0, Dart_NewStringFromCString("pointer")), &pointer0);

  SDL_RestoreWindow((SDL_Window*)pointer0);

  Dart_ExitScope();
}

void dSDL_SetWindowFullscreen(Dart_NativeArguments arguments) {
  Dart_EnterScope();

  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t pointer0;
  Dart_IntegerToInt64(Dart_GetField(arg0, Dart_NewStringFromCString("pointer")), &pointer0);
  Dart_Handle arg1 = Dart_GetNativeArgument(arguments, 1);
  int64_t pointer1;
  Dart_IntegerToInt64(arg1, &pointer1);

  int result = SDL_SetWindowFullscreen((SDL_Window*)pointer0, (Uint32)pointer1);

  Dart_SetReturnValue(arguments, Dart_NewInteger((int64_t)result));
  Dart_ExitScope();
}

void dSDL_GL_CreateContext(Dart_NativeArguments arguments) {
  Dart_EnterScope();

  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t pointer0;
  Dart_IntegerToInt64(Dart_GetField(arg0, Dart_NewStringFromCString("pointer")), &pointer0);

  SDL_GLContext context = SDL_GL_CreateContext((SDL_Window*)pointer0);

  Dart_Handle p = CreateDartObject("Pointer");
  Dart_SetField(p, Dart_NewStringFromCString("pointer"), Dart_NewInteger((intptr_t)context));
  Dart_SetReturnValue(arguments, p);

  Dart_ExitScope();
}

void dSDL_GL_GetCurrentContext(Dart_NativeArguments arguments) {
  Dart_EnterScope();

  SDL_GLContext context = SDL_GL_GetCurrentContext();

  Dart_Handle p = CreateDartObject("Pointer");
  Dart_SetField(p, Dart_NewStringFromCString("pointer"), Dart_NewInteger((intptr_t)context));
  Dart_SetReturnValue(arguments, p);

  Dart_ExitScope();
}

void dSDL_GL_GetCurrentWindow(Dart_NativeArguments arguments) {
  Dart_EnterScope();

  SDL_Window* window = SDL_GL_GetCurrentWindow();

  Dart_Handle p = CreateDartObject("Pointer");
  Dart_SetField(p, Dart_NewStringFromCString("pointer"), Dart_NewInteger((intptr_t)window));
  Dart_SetReturnValue(arguments, p);

  Dart_ExitScope();
}

void dSDL_GL_DeleteContext(Dart_NativeArguments arguments) {
  Dart_EnterScope();

  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t pointer0;
  Dart_IntegerToInt64(Dart_GetField(arg0, Dart_NewStringFromCString("pointer")), &pointer0);

  SDL_GL_DeleteContext((SDL_GLContext)pointer0);

  Dart_ExitScope();
}

void dSDL_GL_MakeCurrent(Dart_NativeArguments arguments) {
  Dart_EnterScope();

  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t pointer0;
  Dart_IntegerToInt64(Dart_GetField(arg0, Dart_NewStringFromCString("pointer")), &pointer0);
  Dart_Handle arg1 = Dart_GetNativeArgument(arguments, 1);
  int64_t pointer1;
  Dart_IntegerToInt64(Dart_GetField(arg1, Dart_NewStringFromCString("pointer")), &pointer1);

  SDL_GL_MakeCurrent((SDL_Window*)pointer0, (SDL_GLContext)pointer1);
  Dart_ExitScope();
}

void dSDL_GL_SwapWindow(Dart_NativeArguments arguments) {
  Dart_EnterScope();
  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t pointer0;
  Dart_IntegerToInt64(Dart_GetField(arg0, Dart_NewStringFromCString("pointer")), &pointer0);
  SDL_GL_SwapWindow((SDL_Window*)pointer0);
  Dart_ExitScope();
}

void dSDL_GL_SetSwapInterval(Dart_NativeArguments arguments) {
  Dart_EnterScope();

  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t pointer0;
  Dart_IntegerToInt64(arg0, &pointer0);

  SDL_GL_SetSwapInterval(pointer0);
  Dart_ExitScope();
}

void dSDL_GL_GetSwapInterval(Dart_NativeArguments arguments) {
  Dart_EnterScope();

  int result = SDL_GL_GetSwapInterval();

  Dart_SetReturnValue(arguments, Dart_NewInteger((int64_t)result));
  Dart_ExitScope();
}

void dSDL_GL_SetAttribute(Dart_NativeArguments arguments) {
  Dart_EnterScope();
  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t pointer0;
  Dart_IntegerToInt64(arg0, &pointer0);
  Dart_Handle arg1 = Dart_GetNativeArgument(arguments, 1);
  int64_t pointer1;
  Dart_IntegerToInt64(arg1, &pointer1);

  SDL_GL_SetAttribute((SDL_GLattr)pointer0, pointer1);
  Dart_ExitScope();
}

void dSDL_PollEvent(Dart_NativeArguments arguments) {
  Dart_EnterScope();

  Dart_Handle arg = Dart_GetNativeArgument(arguments, 0);

  SDL_Event e;
  int result = SDL_PollEvent(&e);

  Dart_SetField(arg, Dart_NewStringFromCString("type"), Dart_NewInteger(e.type));

  if (e.type == SDL_WINDOWEVENT){
    Dart_Handle window = Dart_GetField(arg, Dart_NewStringFromCString("window"));
    if (Dart_IsNull(window)){
        window = CreateDartObject("SDL_WindowEvent");
        Dart_SetField(arg, Dart_NewStringFromCString("window"), window);
    }
    Dart_SetField(window, Dart_NewStringFromCString("windowID"), Dart_NewInteger(e.window.windowID));
    Dart_SetField(window, Dart_NewStringFromCString("event"), Dart_NewInteger(e.window.event));
    Dart_SetField(window, Dart_NewStringFromCString("data1"), Dart_NewInteger(e.window.data1));
    Dart_SetField(window, Dart_NewStringFromCString("data2"), Dart_NewInteger(e.window.data2));
  }
  if (e.type == SDL_KEYDOWN || e.type == SDL_KEYUP){
    Dart_Handle key = Dart_GetField(arg, Dart_NewStringFromCString("key"));
    if (Dart_IsNull(key)){
        key = CreateDartObject("SDL_KeyboardEvent");
        Dart_SetField(arg, Dart_NewStringFromCString("key"), key);
    }
    Dart_SetField(key, Dart_NewStringFromCString("type"), Dart_NewInteger(e.key.type));
    Dart_SetField(key, Dart_NewStringFromCString("windowID"), Dart_NewInteger(e.key.windowID));
    Dart_SetField(key, Dart_NewStringFromCString("state"), Dart_NewInteger(e.key.state));

    Dart_Handle keysym = Dart_GetField(key, Dart_NewStringFromCString("keysym"));
    if (Dart_IsNull(keysym)){
        keysym = CreateDartObject("SDL_Keysym");
        Dart_SetField(key, Dart_NewStringFromCString("keysym"), keysym);
    }
    Dart_SetField(keysym, Dart_NewStringFromCString("scancode"), Dart_NewInteger(e.key.keysym.scancode));
    Dart_SetField(keysym, Dart_NewStringFromCString("sym"), Dart_NewInteger(e.key.keysym.sym));
    Dart_SetField(keysym, Dart_NewStringFromCString("mod"), Dart_NewInteger(e.key.keysym.mod));
    Dart_SetField(keysym, Dart_NewStringFromCString("unused"), Dart_NewInteger(e.key.keysym.unused));
  }
  if (e.type == SDL_MOUSEMOTION){
    Dart_Handle motion = Dart_GetField(arg, Dart_NewStringFromCString("motion"));
    if (Dart_IsNull(motion)){
        motion = CreateDartObject("SDL_MouseMotionEvent");
        Dart_SetField(arg, Dart_NewStringFromCString("motion"), motion);
    }
    Dart_SetField(motion, Dart_NewStringFromCString("windowID"), Dart_NewInteger(e.motion.windowID));
    Dart_SetField(motion, Dart_NewStringFromCString("which"), Dart_NewInteger(e.motion.which));
    Dart_SetField(motion, Dart_NewStringFromCString("state"), Dart_NewInteger(e.motion.state));
    Dart_SetField(motion, Dart_NewStringFromCString("x"), Dart_NewInteger(e.motion.x));
    Dart_SetField(motion, Dart_NewStringFromCString("y"), Dart_NewInteger(e.motion.y));
    Dart_SetField(motion, Dart_NewStringFromCString("xrel"), Dart_NewInteger(e.motion.xrel));
    Dart_SetField(motion, Dart_NewStringFromCString("yrel"), Dart_NewInteger(e.motion.yrel));
  }
  if (e.type == SDL_MOUSEBUTTONDOWN || e.type == SDL_MOUSEBUTTONUP){
    Dart_Handle button = Dart_GetField(arg, Dart_NewStringFromCString("button"));
    if (Dart_IsNull(button)){
        button = CreateDartObject("SDL_MouseButtonEvent");
        Dart_SetField(arg, Dart_NewStringFromCString("button"), button);
    }
    Dart_SetField(button, Dart_NewStringFromCString("windowID"), Dart_NewInteger(e.button.windowID));
    Dart_SetField(button, Dart_NewStringFromCString("which"), Dart_NewInteger(e.button.which));
    Dart_SetField(button, Dart_NewStringFromCString("button"), Dart_NewInteger(e.button.button));
    Dart_SetField(button, Dart_NewStringFromCString("state"), Dart_NewInteger(e.button.state));
    Dart_SetField(button, Dart_NewStringFromCString("x"), Dart_NewInteger(e.button.x));
    Dart_SetField(button, Dart_NewStringFromCString("y"), Dart_NewInteger(e.button.y));
  }
  if (e.type == SDL_MOUSEWHEEL){
    Dart_Handle wheel = Dart_GetField(arg, Dart_NewStringFromCString("wheel"));
    if (Dart_IsNull(wheel)){
        wheel = CreateDartObject("SDL_MouseWheelEvent");
        Dart_SetField(arg, Dart_NewStringFromCString("wheel"), wheel);
    }
    Dart_SetField(wheel, Dart_NewStringFromCString("windowID"), Dart_NewInteger(e.wheel.windowID));
    Dart_SetField(wheel, Dart_NewStringFromCString("which"), Dart_NewInteger(e.wheel.which));
    Dart_SetField(wheel, Dart_NewStringFromCString("x"), Dart_NewInteger(e.wheel.x));
    Dart_SetField(wheel, Dart_NewStringFromCString("y"), Dart_NewInteger(e.wheel.y));
  }

  Dart_SetReturnValue(arguments, Dart_NewInteger(result));
  Dart_ExitScope();
}

void dSDL_GetWindowTitle(Dart_NativeArguments arguments) {
  Dart_EnterScope();

  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t pointer0;
  Dart_IntegerToInt64(Dart_GetField(arg0, Dart_NewStringFromCString("pointer")), &pointer0);

  const char * title = SDL_GetWindowTitle((SDL_Window*)pointer0);

  Dart_SetReturnValue(arguments, Dart_NewStringFromCString(title));
  Dart_ExitScope();
}

void dSDL_SetWindowTitle(Dart_NativeArguments arguments) {
  Dart_EnterScope();

  Dart_Handle arg0 = Dart_GetNativeArgument(arguments, 0);
  int64_t pointer0;
  Dart_IntegerToInt64(Dart_GetField(arg0, Dart_NewStringFromCString("pointer")), &pointer0);
  Dart_Handle arg1 = Dart_GetNativeArgument(arguments, 1);
  const char* pointer1;
  Dart_StringToCString(arg1, &pointer1);

  SDL_SetWindowTitle((SDL_Window*)pointer0, pointer1);

  Dart_ExitScope();
}

void dSDL_Test(Dart_NativeArguments arguments) {
  Dart_EnterScope();

  Dart_ExitScope();
}

static std::map<const char*, Dart_NativeFunction, ltstr> functions;
void init_resolver(){

	functions["SDL_Init"] = dSDL_Init;
	functions["SDL_InitSubSystem"] = dSDL_InitSubSystem;
	functions["SDL_QuitSubSystem"] = dSDL_QuitSubSystem;
	functions["SDL_WasInit"] = dSDL_WasInit;
	functions["SDL_Quit"] = dSDL_Quit;

	functions["SDL_CreateWindow"] = dSDL_CreateWindow;
	functions["SDL_DestroyWindow"] = dSDL_DestroyWindow;
	functions["SDL_ShowWindow"] = dSDL_ShowWindow;
	functions["SDL_HideWindow"] = dSDL_HideWindow;
	functions["SDL_RaiseWindow"] = dSDL_RaiseWindow;
	functions["SDL_MaximizeWindow"] = dSDL_MaximizeWindow;
	functions["SDL_MinimizeWindow"] = dSDL_MinimizeWindow;
	functions["SDL_RestoreWindow"] = dSDL_RestoreWindow;
	functions["SDL_SetWindowFullscreen"] = dSDL_SetWindowFullscreen;

	functions["SDL_GL_CreateContext"] = dSDL_GL_CreateContext;
	functions["SDL_GL_DeleteContext"] = dSDL_GL_DeleteContext;
	functions["SDL_GL_MakeCurrent"] = dSDL_GL_MakeCurrent;
	functions["SDL_GL_GetCurrentContext"] = dSDL_GL_GetCurrentContext;
	functions["SDL_GL_GetCurrentWindow"] = dSDL_GL_GetCurrentWindow;
	functions["SDL_GL_SwapWindow"] = dSDL_GL_SwapWindow;
	functions["SDL_GL_SetSwapInterval"] = dSDL_GL_SetSwapInterval;
	functions["SDL_GL_GetSwapInterval"] = dSDL_GL_GetSwapInterval;
	functions["SDL_GL_SetAttribute"] = dSDL_GL_SetAttribute;

	functions["SDL_PollEvent"] = dSDL_PollEvent;
	functions["SDL_GetWindowTitle"] = dSDL_GetWindowTitle;
	functions["SDL_SetWindowTitle"] = dSDL_SetWindowTitle;
	functions["SDL_Test"] = dSDL_Test;
}

Dart_NativeFunction resolver(const char* cname) {
  Dart_NativeFunction result = NULL;
  result = functions[cname];
  return result;
}
