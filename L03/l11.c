#include <stdio.h>
const size_t N = 4;
int main () {
   int  var[] = {1, 20, 300, 4000};
   int  i, *ptr;
   ptr = &var[N-1]; /* візьмемо адресу останнього елементу масиву*/
   for ( i = N; i > 0; i--) {
     printf("Address of var[%d] = %p\n", i-1, ptr );
     printf("Value of var[%d] = %d\n", i-1, *ptr );
     ptr--; /* рухаємося назад по масиву */
   }

  ptr = &var[N-1]; /* візьмемо адресу останнього елементу масиву*/
  for(i = N; i > 0; i--) {
    printf("Address of var[%d] = %p\n", i-1, ptr );
    printf("Value of var[%d] = %d\n", i-1, *ptr );
    ptr = ptr - 2; /* рухаємося назад по масиву з кроком 2*/
}

}
