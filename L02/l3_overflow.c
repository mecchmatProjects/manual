#include <stdio.h>
#include <limits.h>

int sum1(int a, int b, int *overflow) {
int c = 0;
if (a > 0 && b > 0 && (INT_MAX - b < a) || a < 0 && b < 0 && (INT_MIN - b > a)){
    *overflow = 1;
}
else{
    *overflow = 0;
    c = a + b;
}
return c;
}

int sum2(int a, int b, int *overflow) {
signed long long c = (signed long long) a + (signed long long) b;
if (c < INT_MAX && c > INT_MIN) {
*overflow = 0;
c = a + b;
}
else{
    *overflow = 1;
}
return (int) c;
}

unsigned usumm(unsigned a, unsigned b, int *overflow) {
    unsigned c = a + b;
if (c < a || c < b) {
    *overflow = 1;
}
else{
    *overflow = 0;
}
return c;
}


int main(){
  int a,b,c;
  int ov1,ov2;
  a=100;
  b=231; 
  c = sum1(a,b,&ov1);
  printf("s=%d, over=%d", c, ov1);

  a=11111111110;
  b=23111111111; 
  c = sum1(a,b,&ov1);
  printf("s=%d, over=%d", c, ov1);

  a=100;
  b=231; 
  c = sum2(a,b,&ov1);
  printf("s=%d, over=%d", c, ov2);

  a=11111111110;
  b=23111111111; 
  c = sum2(a,b,&ov1);
  printf("s=%d, over=%d", c, ov2);

  a=11111111110;
  b=23111111111; 
  c = usumm(a,b,&ov1);
  printf("s=%d, over=%d", c, ov1);
}

