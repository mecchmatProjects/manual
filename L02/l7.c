#include<stdio.h>
int main(){
 float a,b,c;
 printf("Введiть число a: "); scanf("%f",&a);
 printf("Введiть число b: "); scanf("%f",&b);
 if (b==0) printf("Ділення на нуль ! ");
 else {
 c=a/b;
 printf("a: b == %g",c);
 };
}
