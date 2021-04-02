#include <stdio.h>

int main () {
   /* визначення локальних змінних */
   int i, j;
      for(i = 2; i<35; i++) {

      	for(j = 2; j*j <= i; j++) 
      		if(!(i%j)) break; // якщо є дільник, то число - не просте
      	if(j > (i/j)) printf("%d is prime\n", i);
   }
 
   return 0;
}
