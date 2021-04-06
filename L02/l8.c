/* застосування умовного розгалужування */
#include <stdio.h>
#include <math.h>
int main() {
 int number;
 int ok;
 printf("Введіть число з інтервалу 1..100: ");
 scanf("%d",&number);
 ok=(1<=number) && (number<=100);
 if (!ok)  printf("Не коректно !! ");

 double x=9,y,z;
 if(x>7) y = pow(x, 2);
 else y=sqrt(x);

 if(x<=5)
       z = exp(x);
 else z = ++x;
 printf("%lf %lf %lf",x,y,z);
 return ok;
}
