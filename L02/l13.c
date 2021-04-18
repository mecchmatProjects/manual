#include <stdio.h>
int main() {
   /* визначення локальної змінної */
   int i = 5;
   /* виконується цикл */
   do {
      printf("i = %d;\n", i);
      i = i + 1; // i++
   }while(i < 12);
}

/*
i = 5;
i = 6;
i = 7;
i = 8;
i = 9;
i = 10;
i = 11;
*/
