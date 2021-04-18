// c11 - scanf_s()
#include <stdio.h>
int main(){
   int  a,b;
   char c,d;
   // here is OK
   scanf("%d",&a);
   scanf(" %c",&c);
   printf("a=%d,c=%c",a,c);
   // not OK
   scanf("%d",&b);
   scanf("%c",&d);

   printf("a=%d,c=%c",b,d);
}

/*
23 c
a=23,c=c
34
a=34,c=
*/

/*
23 c
a=23,c=c23 e
a=23,c= 
*/
