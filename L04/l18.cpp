#include <iostream>
using namespace std;

// функція MyFunction
// параметр x - передається за значенням (параметр-значення)
// параметр y - передається за адресою
// параметр z - передається за посиланням
void MyFunction(int x, int* y, int& c){
    x = 8; // значення параметра змінюється тільки в межах тіла функції
    *y = 8; // значення параметра змінюється також за межами функції
    c = 8; // значення параметра змінюється також за межами функції
    return;
}

int main(){

int a, b, c;
a = b = c = 5;
// виклик функції MyFunction()
// параметр a передається за значенням a->x
// параметр b передається за адресою   b->y
// параметр c передається за посиланням c->z
MyFunction(a, &b, c); // на виході a = 5; b = 8; c = 8;
cout<<a<<","<<b<<","<<c<<endl;
}
