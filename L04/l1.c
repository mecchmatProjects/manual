#include <stdio.h>

void op (int x, int y){
printf(“\nПросто виводимо щось %d %d!\n”, x, y);
return; // цей оператор можна просто не писати
}

float cube(float d){
         return d*d*d;  // тип результату float
}

void f(){};
void f(void){};
void f(){ return void;}
void f(void) {return;}


void main(){

float s, f=0.55; 

s=cube(f);

 op(1,2);

}
