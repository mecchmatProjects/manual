#include<stdio.h>
void main(){
int points;
printf("Введіть оцiнку [2..5]:");
scanf("%d",&points);
printf("%s",points>3?"Ви добре знаєте матеріал!":"Погано...");
}
