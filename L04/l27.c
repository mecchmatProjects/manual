#include <stdio.h>
int sum (int a[],int n){ 
  int s=0;
  for(int i=0; i<n; i++)
    s+=a[i];
  return s;
}
int main(){
  int a[]={1, 3, 5, 7, 9, 11, 13, 15 };
  int s = sum( 7, a );
  printf("summa=%d",s);
}
