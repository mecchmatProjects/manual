#include <stdio.h>

int main () {
   /* визначення локальних змінних */
   int i, j;
       // перебираємо всі числа від 2 до 35
      for(i = 2; i<35; i++) {
         // шукаємо дільники серед чисел менших кореня від і
      	for(j = 2; j*j <= i; j++) 
      		if(!(i%j)) break; // якщо є дільник, то число - не просте
      	if(j*j > i) printf("Number %d is prime\n", i);
   }
 
}
/*
Number 2 is prime
Number 3 is prime
Number 5 is prime
Number 7 is prime
Number 11 is prime
Number 13 is prime
Number 17 is prime
Number 19 is prime
Number 23 is prime
Number 29 is prime
Number 31 is prime

*/
