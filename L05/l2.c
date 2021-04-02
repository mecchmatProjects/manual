#include <string.h>
#include <stdio.h>
int main ( ){ 
// визначили структуру
struct credit { char* pib; int theory[2]; int tasks[2]; float avg;} st1, st2;
// потрібно виділити пам'ять під перше поле
st1.pib=(char*) malloc(30);
strcpy (st1.pib, "Нездавайло Х.Х.");// та ініціалізувати його
st1.theory = {2,3}; // ініціалізуємо інші поля
st1.tasks[0] = 0;
st1.tasks[1] =3; 
// рахуємо середній бал
st1.avg = (float) (st1.theory[0] +st1.theory[1] + st1.tasks[0] + st1.tasks[1]);
st2 = st1;  // присвоєння структур - визначено
puts (st2.pib); // виводимо 1 поле 2-ої структури
free(st1.pib); /* звільнюємо ділянку під прізвище – це звільнить й друге прізвище!!*/

// 2 варіант – більш правильний
st1.pib=(char*) malloc(30); // виділямо дві ділянки під призвища
st2.pib=(char*) malloc(30);
strcpy (st1.pib, "Здавайло У.У");
strcpy(st2.pib,st1.pib, sizeof(st1.pib));

free(st1.pib); // звільнюємо дві ділянки під призвища
free(st2.pib);
}
