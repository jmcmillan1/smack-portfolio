#include "smack.h"
#include <stdlib.h>

// @expect verified

typedef struct {
  int i;
  int j;
} a;

int main(void) {
  a *x = (a *)malloc(sizeof(a));
  long *p = (long *)x;
  x->i = 10;
  x->j = 20;
  *p = 0;
  assert(x->j == 0);
  return 0;
}