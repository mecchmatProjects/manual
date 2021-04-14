#include <stdlib.h>
#define N 10
#define M 1000

int main(void){
  float *p1 = malloc(N*sizeof *p1);
  free(p1); // все що виділено(allocated) як вказівник повинно бути звільнено
  unsigned *p2 = calloc(N, sizeof *p2);
  unsigned *p3 = realloc(p2, M*sizeof *p3);
  if(p3) // якщо p3 не null це значить що p2 звільнено realloc
    free(p3);
   else // якщо p3 null означає що p2 ще не звільнено
    free(p2);
}
