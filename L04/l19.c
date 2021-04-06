#include <stdio.h>
int a,b,c;   // глобальні параметри

int sum ( );   //----------- прототип функції

int main ( ) {
 scanf("%d %d",&a,&b);
sum();  //----------- виклик sum()
printf("c=%d",c);
}

int  sum( ) //----------- функція sum()
{ c = a+ b;}

