#include <stdio.h>
const int MAX = 4;
int main () {
char* names[] = {
 "Georgetta",
 "Musetta",
 "Odetta",
 "Kosetta"
};

int i = 0;
for ( i = 0; i < MAX; i++) {
printf("Value of names[%d] = %s\n", i, names[i] );
}
}
