#include<stdio.h>
// функція, що знаходить n!
unsigned long int MyFact(int n) // початок області видимості формального параметру n
{
    int i;
    unsigned long int f = 1; // результат

    for (i=1; i<=n; i++)
        f = f*i;

    return f;   // кінець області видимості формального параметру n
}

int main(){
// виклик функції з іншого програмного коду
int k;
unsigned long int fact;
k = 6;
fact = MyFact(k); // fact = 6! = 720

}
