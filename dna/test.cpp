#include "include/dart_api.h"
#include "include/dart_native_api.h"

#include <string.h>
#include <map>

struct SumSt {
  char a;
  int b;
  char c;
};

struct SumNestSt {
  int a;
  SumSt* p;
  int b;
};

DART_EXPORT
int sum(int a, int b){
  return a+b;
}

DART_EXPORT
int sumSt(SumSt st){
  int c = st.a+st.b+st.c;

  return c;
}

DART_EXPORT
int sumStPtr(SumSt * st){
  int c = st->a+st->b+st->c;

  return c;
}

DART_EXPORT
int sumNestStPtr(SumNestSt * st){
  int c = st->a+st->b+st->p->a+st->p->b;

  return c;
}
