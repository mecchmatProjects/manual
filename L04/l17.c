#include <stdio.h>

void fun (int p) // функція fun()
{          ++p;
	printf("%d",p);
}

int main ( ) //----------- головна функция
{
	int x = 10; 
	fun (x); //----------- виклик функції
	printf("%d",x);
}
