#include <stdio.h>
int main () {

int sum,i;
/* ... */
sum=1;
for (i=1;i<10;i++)
  sum+=i;

printf("sum=%d",sum);

//int a[10],sum,i;
/* ... */
for (i=1,sum=1;i<10;sum+=i,i++) ;
printf("sum=%d",sum);

}

