#include <stdio.h>


void f(){};
void f(void){};
void f(){ return void;}
void f(void) {return;}


void MyFuncMult2(int x){
    int res;     // внутрішня змінна
    res = x * 2; // обчислення результату
    printf(“r=%d”, res) // вивід результату 
}

// функція, що множить параметр x на параметр y і виводить результат на форму
void MyFuncMultDouble(double x, double y){
    double z;
    z = x*y;
    printf(“r=%f \n”, z) // вивід результату
    return;
}

int main(){

// виклик функції з обробника події
MyFuncMult2(42); // буде виведено 84
MyFuncMult2(-8); // -16


MyFuncMultDouble(2.5, -2.0); // буде виведено -5
MyFuncMultDouble(1.85, -2.23); // буде виведено -4.1255

}
