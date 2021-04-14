#include <stdio.h>
#define N 80
typedef struct Names{ /*перший шаблон*/
 char name[N];
 char surname[N];
} Name;

struct Harakter { /*другий шаблон*/

  Name friend; /*вкладена структура*/
  char dish[N];
  char job[N];
  float salary;
} Harakter;

int main() {
  /*ініціалізація змінної*/
  struct Harakter x1[2] = {        
        {{"Іван" ,"Петренко"}, "вареники", "інженер", 30250.00},
        {{"Петро","Іващенко"},"борщ","лікар",40325.00}
       };
  struct Harakter *x2;
 
 x2=&x1[0]; /*вказує на структуру*/
 printf("заробіток: %lf \n",x2->salary);
 x2++; /*вказує на наступну структуру*/
 printf("заробіток: %lf \n", (*x2).salary);
 printf("улюблена страва %s - %s  \n ",x2->friend.surname,x2->dish);
}

/*
заробіток: 30250.000000 
заробіток: 40325.000000 
улюблена страва Іващенко - борщ
*/
