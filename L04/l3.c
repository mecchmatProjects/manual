
#include <stdio.h>
// функція, що множить параметр на 5
int Mult5(int d){
    int res;
    res = d * 5;
    return res; // повернення результату
}

int sign(float x)
{    if (x<0) return -1;
    if (x==0) return 0;
    if (x>0) return 1;
}

// функція, що знаходить максимум між двома дійсними числами
float MaxFloat(float x, float y)
{
    if (x>y) return x;
    else return y;
}


// функція, що знаходить максимум між трьома цілими числами
// функція отримує 3 цілочисельних параметри з іменами a, b, c
int MaxInt3(int a, int b, int c){
    int max;
    max = a;
    if (max<b) max = b;
    if (max<c) max = c;
    return max;
}

int main(){

// виклик функції з іншого програмного коду
int x, y;
x = 20;
y = Mult5(x);   // y = 100
y = Mult5(-15); // y = -75


int res;
res = sign(-0.399f); // res = -1
res = sign(0.00f);   // res = 0
res = sign(2.39);    // res = 1

// виклик функції з іншого програмного коду
float Max; // змінна - результат
Max = MaxFloat(29.65f, (float)30); // Max = 30.0

double x = 10.99;
double y = 10.999;
Max = MaxFloat(x, y); // Max = 10.999
Max = MaxFloat((float)x, (float)y); // Max = 10.999 - так надійніше

// виклик функції з іншого програмного коду
int a = 8, b = 5, c = -10;
int res;
res = MaxInt3(a, b, c);       // res = 8
res = MaxInt3(a, b+10, c+15); // res = 15
res = MaxInt3(11, 2, 18);     // res = 18

}
