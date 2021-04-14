/* застосування умовного розгалужування */
#include <stdio.h>
#include <math.h>
int main() {
 int number;
 int condition;
 printf("Число з інтервалу 1..100: ");
 scanf("%d",&number);
 condition = (0<number) && (number<101);
 if (!condition){
    printf("Не коректно !! ");
 }

 double x=9,y,z;
 if(x>7) y = pow(x, 2);
 else y=sqrt(x);

 if(x<=5)
       z = exp(x);
 else z = ++x;
 printf("%lf %lf %lf",x,y,z);
 return ok;
}
