#include <stdio.h>
#include <math.h>
int main(){
 float c=1.231;
 float x,y;
 printf("\nx="); 
 scanf("%f",&x);
 printf("\ny=");
 scanf("%f",&y);
 double A;
 if(x<=y){
          A = x * x * y  + c * sqrt(y);
 }
 else{
          A=cos(x) + log(y);
 }
 printf("A=%lf\n", A);
 printf("\nx="); 
 scanf("%f",&x);
 if(x<=y){
    A = x * x * y - c * sqrt(y);}
 else{
    A=log(y) + cos(x);
 }
 printf("A=%lf\n", A);
 getchar();
 return 0;
}

/*

x=1

y=1
A=2.231000

x=2
A=-0.416147
*/
