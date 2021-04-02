#include <stdio.h>
int main () {
   /* визначення локальної змінної */
   int a = 10;
   /* виконується цикл */
   do {
      printf("value of a: %d\n", a);
      a = a + 1;
   }while( a < 20 );
}
