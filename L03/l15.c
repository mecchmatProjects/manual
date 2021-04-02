#include <stdio.h>
#include <stdlib.h>

int main(void){
int *p1 = calloc(4, sizeof(int));    // ініціалізуємо пам'ять під 4 цілих
int *p2 = calloc(1, sizeof(int[4])); // ініціалізуємо пам'ять під 4 цілих 
int *p3 = calloc(4, sizeof *p3);     // ініціалізуємо пам'ять під 4 цілих
if(p2) {
for(int n=0; n<4; ++n) // виводимо
            printf("p2[%d] == %d\n", n, p2[n]);
}
    free(p1);
    free(p2);
    free(p3);
}
