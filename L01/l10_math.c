#include<stdio.h>
#include<math.h>

int main(){
   double x, y, z;
   scanf("%lf %lf",&x,&y);
   z = exp(x)*cos(y);
   printf("z=%lf",z);
}
