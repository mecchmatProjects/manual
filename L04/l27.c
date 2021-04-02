#include <stdio.h>
int sum (int n, int a[] ){ 
int i, s=0;
for( i=0; i<n; i++ )
s+=a[i];
return s;
}
int main(){
int a[]={ 3, 5, 7, 9, 11, 13, 15 };
int s = sum( 7, a );
printf(“s=%d”,s);
}
