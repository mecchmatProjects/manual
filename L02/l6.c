#include<stdio.h>
void main(){
  int points;
  printf("Введіть оцінку від 0 до 100:");
  scanf("%d",&points);
  printf("%s",points>=60?"Ви здали залік!":"Спробуйте ще раз!");
}
