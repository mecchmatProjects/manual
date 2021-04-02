#include <stdio.h>
long long int factorial(int n){
if (n==0 || n==1) return 1;
else return n*factorial(n-1);
}
int main(){
int x;
printf("Ввести число x=");scanf(“%d”,&x);
printf("Факторіал x!=%Ld",factorial(x));
}
