#include <stdio.h>
int main(){
char str [16] = { 'T', 'e', 'x', 't', ' ', 'a', 'n', 'd', ' ', 's', 't', 'o', 'p', '!' ,'\0'};
for (int i = 0; i <=sizeof(str); i++)
{
    printf("%c",str[i]);
}
printf("\n");
}
