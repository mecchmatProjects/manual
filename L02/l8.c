/* застосування умовного розгалужування */
#include <stdio.h>
int main() {
 int number;
 int ok;
 printf("Введіть число з інтервалу 1..100: ");
 scanf("%d",&number);
 ok=(1<=number) && (number<=100);
 if (!ok)  printf("Не коректно !! ");

 double x=9,y,z;
   
if(х > 7)  у = pow(x, 2);
else у = sqrt(x);
if(х <= 5)
          z= ехр(х);
else z= ++x;
 printf("%lf %lf %lf",x,y,z);
 return ok;
}
