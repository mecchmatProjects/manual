#include <stdlib.h>
int main(void){
int *p1 = malloc(10*sizeof *p1);
free(p1); // все що виділено(allocated) як вказівник повинно бути звільнено
int *p2 = calloc(10, sizeof *p2);
int *p3 = realloc(p2, 1000*sizeof *p3);
if(p3) // якщо p3 не null це значить що p2 звільнено realloc
free(p3);
else // якщо p3 null означає що p2 ще не звільнено
free(p2);
}
