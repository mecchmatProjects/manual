#include <stdio.h>
int a = 20; /* глобальні змінні */
int sum(int a, int b);
int main () {   /* локальні змінні в main function */
  int a = 10; int b = 20; int c = 0;
  printf ("value of a in main() = %d\n",  a);
  c = sum( a, b);
  printf ("value of c in main() = %d\n",  c);
  return 0;
}

/* функція додавання */
int sum(int a, int b) {
   printf ("value of a in sum() = %d\n",  a);
   printf ("value of b in sum() = %d\n",  b);
   return a + b;
}
