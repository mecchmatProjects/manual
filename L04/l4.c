#include <stdio.h>

double sqr (double); // прототип функції sqr()
int main( ) // голавна функція
{ //---------------- виклик функції sqr()
 printf("Квадрат числа=%lf \n", sqr (9));
}
double sqr (double p) //реалізація функції sqr()
{ return p*p; } //повернення результату
