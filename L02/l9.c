#include <stdio.h>
#include <math.h>
int main(){
 float C=1.231;
 float x,y;
 printf("\nx="); 
 scanf("%f",&x);
 printf("\ny=");
 scanf("%f",&x);
 double A;
 if(x<=y){
                 A=x*y-C*y*sqrt(y);
 }
 else{
           A=cos(x)+log(y);
 }
 printf("A=%lf\n", A);
 printf("\nx="); 
 scanf("%f",&x);
 if(x<=y){A=x*y-C*y*sqrt(y);}
else{A=cos(x)+log(y);}
 printf("A=%lf\n", A);
 getchar();
 return 0;
}
