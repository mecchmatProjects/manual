#include <stdio.h>
#include <stdlib.h>

int main(){
int *pa = malloc(10 * sizeof *pa); // виділяємо пам'ять під масив 10 цілих
if(pa) {
        printf("%zu bytes allocated. Storing ints: ", 10*sizeof(int));
for(int n = 0; n < 10; ++n)
            printf("%d ", pa[n] = n);
}

int *pb = realloc(pa, 1000000 * sizeof *pb); // перевиділяємо пам'ять під масив 
if(pb) {
        printf("\n%zu bytes allocated, first 10 ints are: ", 1000000*sizeof(int));
for(int n = 0; n < 10; ++n)
            printf("%d ", pb[n]); // виводимо масив
        free(pb);
} else { // перевіряємо вказівник перед знищенням 
        free(pa);
}
}
