#include <iostream>
int main(){
int a=2000;
short b;
unsigned c;
b=(short)a; // b=a; 
c = unsigned(a);
float d = (float)a;

std::cout<<a<<","<<b<<","<<c<<","<<d<<"\n";
}
