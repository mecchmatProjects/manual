#include <stdio.h>
const int MAX = 3;
int main () {
   int  var[] = {10, 100, 200};
   int  i, *ptr;
   ptr = &var[MAX-1]; /* візьмемо адресу останнього елементу масиву*/
   for ( i = MAX; i > 0; i--) {
     printf("Address of var[%d] = %p\n", i-1, ptr );
     printf("Value of var[%d] = %d\n", i-1, *ptr );
     ptr--; /* рухаємося назад по масиву */
   }

ptr = &var[MAX-1]; /* візьмемо адресу останнього елементу масиву*/
for ( i = MAX; i > 0; i--) {
    printf("Address of var[%d] = %p\n", i-1, ptr );
    printf("Value of var[%d] = %d\n", i-1, *ptr );
    ptr = ptr - 2; /* рухаємося назад по масиву з кроком 2*/
}

}
