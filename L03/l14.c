#include <stdio.h>   
#include <stdlib.h> 

int main(void) {
int *p1 = malloc(4*sizeof(int));  // виділяє пам'ять під масив 4 int
int *p2 = malloc(sizeof(int[4])); // аналогічно, 
int *p3 = malloc(4*sizeof *p3);   // що один варіант того самого

if(p1) { // перевіряємо, чи коректно виділена пам'ять 
  for(int n=0; n<4; ++n) // проходимо масив та ініціалізуємо його
     p1[n] = n*n;
     
  for(int n=0; n<4; ++n) // друкуємо значення масиву 
     printf("p1[%d] == %d\n", n, p1[n]);
}

free(p1);
free(p2);
free(p3);
}
