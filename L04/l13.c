#include<stdio.h>

// функція, що знаходить модуль дійсного числа
float MyAbs(float x) // x - формальний параметр
{
    if (x<0) return (float)(-x);
    else return x;
}

int main(){
// виклик функції з іншого програмного коду
float res, a;
a = -18.25f;
res = MyAbs(a); // res = 18.25f; змінна a - фактичний параметр
res = MyAbs(-23); // res = 23; константа 23 - фактичний параметр

}
