#include <stdio.h>

unsigned Mul (unsigned a, unsigned b) {
unsigned S;
if (b==0) S=0;
else S=b+Mul(a,b-1);
return S;
}

unsigned gcd(unsigned x, unsigned y){
  if(y==0) return x;
  return gcd(y,x%y);
}

int main(){
  printf("Sum=%d",Mul(3,5));
  unsigned m=gcd(450,80);
  printf("gcd(450,80)=%u",m);
}
