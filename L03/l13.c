#include <stdio.h>
static const size_t N = 3;
int main () {
  int  var[] = {10, 100, 200};
  int i, *ptr[N];
  for(i = 0; i < N; i++) {
     ptr[i] = &var[i]; /* взяти адресу integer. */
  }
  for(i = 0; i < N; i++) {
     printf("var[%d] = %d\n", i, *ptr[i]);
  }
}
