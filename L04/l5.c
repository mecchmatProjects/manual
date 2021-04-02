#include <stdio.h>

// функція, що ділить 2 числа націло
long int Div(long int x, long int y){
    long int res;
    res = x / y; // результат - ціле число
    return res;
}

long DivRigth(long, long);

int main(){
// виклик функції з іншого програмного коду
int a, b, c;
a = 290488;
b = -223;
c = Div(a, b); // правильна відповідь: c = -1302. Значення c може бути помилкове

long c2 = DivRigth((long)a, b); // правильна відповідь: c = -1302. 
printf("c=%ld",c2);

}

long DivRigth(long x, long y){
    long res;
    res = x / y; // результат - ціле число
    return res;
    }
