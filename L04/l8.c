#include <stdio.h>
#include <time.h>

/* функція, що генерує масив випадкових чисел */
int * getRandom( ) {
static int r[10];
int i;
srand( (unsigned)time( NULL ) );  /*  встановлюємо сіль(seed) */

for ( i = 0; i < 10; ++i) {
r[i] = rand();
printf("%d\n", r[i] );
}
return r;
}
int main () {
int *p; /* створюємо вказівник на ціле число */
int i;
p = getRandom();

for ( i = 0; i < 10; i++ ) {
printf("*(p + [%d]) : %d\n", i, *(p + i) );
}
}
