// c11 - scanf_s()
#include <stdio.h>
int main(){
   int  a,b;
   char c,d;

   scanf("%d",&a);
   scanf(" %c",&c);

   printf("a=%d,c=%c",a,c);

   scanf("%d",&b);
   scanf("%c",&d);

   printf("a=%d,c=%c",b,d);

