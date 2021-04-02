#include <stdio.h>
#define N 20
typedef struct names{ /*перший шаблон*/
char imya[N];
char prizv[N];
} names;
typedef struct harakter { /*другий шаблон*/
struct names druzi; /*вкладена структура*/
char bludo[N];
char robota[N];
float zarob;
} harakter;
int main() {
struct harakter x1[2]{{ /*ініціалізація змінної*/
{“Іван” ,“Петренко”}, “вареники”, “інженер”,30250.00},
{“Петро”,”Іващенко”},”борщ”,”лікар”,40325.00}};
struct harakter *x2;
x2=&x1[0]; /*вказує на структуру*/
printf(“заробіток: %lf \n”,x2->zarob);
x2++; /*вказує на наступну структуру*/
printf(“заробіток: %lf \n”, (*x2).zarob);
printf(“улюблена страва %s - %s  \n ”,x2→druzi.prizv,x2->bludo);
}

