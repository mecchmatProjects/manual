#include <stdio.h>

#define N  3

int main () {
   int  var[] = {1, 20, 300};
   int  i, *ptr; 
   ptr = var; /* візьмемо адресу першого елементу масиву */
   i = 0;
   while ( ptr <= &var[N-1] ) {
      printf("Address of var[%d] = %p\n", i, ptr);
      printf("Value of var[%d] = %d\n", i, *ptr);
      ptr++;
      i++;
   }
}
