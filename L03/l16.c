#include <stdio.h>
#include <stdlib.h>

#define N 10
#define M 10000

int main(){
 int *parray = malloc(N * sizeof *parray); // виділяємо пам'ять під масив 10 цілих
 if(parray) {
        printf("%zu bytes allocated. Storing ints: ", N*sizeof(int));
        for(int i = 0; i < N; ++i)
           printf("%d ", parray[i] = i);
 }

  int *parray2 = realloc(parray, M * sizeof *parray2); // перевиділяємо пам'ять під масив 
  if(parray2) {
      printf("\n%zu bytes allocated, first %d ints are: ", M*sizeof(int),N);
      for(int i = 0; i < N; ++i)
            printf("%d ", parray2[i]); // виводимо масив
      free(parray2);
  } else { // перевіряємо вказівник перед знищенням 
      free(parray);
  }
}

/*
40 bytes allocated. Storing ints: 0 1 2 3 4 5 6 7 8 9 
40000 bytes allocated, first 10 ints are: 0 1 2 3 4 5 6 7 8 9 
*/
