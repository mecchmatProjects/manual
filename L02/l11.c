#include <stdio.h>
#include <math.h>

int main(){

 double x,y,z;
 int signum;
 scanf("%lf",&x); 
if(x>0){
	signum =1;
}
else if (x==0){
	signum=0;
}
else{ signum=-1;	
}

 scanf("%lf",&y); 
if(x>0){
	if(y>0){
                  z= sqrt(x)+sqrt(y);
	}
	else{
		z =1;
	}
}
else{
	z=-1;
}
 
printf("signum =%d , z=%lf",signum,z);
}
