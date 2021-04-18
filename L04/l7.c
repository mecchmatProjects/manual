
#include <stdio.h>
double getAverage(int *arr, int size); /* декларація функції */

int main () {
int balance[5] = {1000, 2, 3, 17, 50}; /* масив 5 елементів */
double avg;
avg = getAverage( balance, 5 ) ; //передаємо вказівник на масив як аргумент 
printf("Average value is: %f\n", avg ); /* виводимо результат */
}

double getAverage(int *arr, int size) { 
int  i, sum = 0;   /* реалізація функції: середнє значення*/
double avg;          
for (i = 0; i < size; ++i) {
sum += arr[i];
}
avg = (double)sum / size;
return avg;
}
