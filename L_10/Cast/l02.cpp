//Перетворення класів:  implicit conversion of classes:
#include <iostream>
#include <ostream>

class A { // перший клас
   friend std::ostream& operator<< (std::ostream& out, const A& a){
      out<< "print A\n";
      return out;
   }     

};

class B { // другий клас
public:
  // Переторення у констуркторі:  conversion from A (constructor):
  B (const A& x) {
       std::clog<<"construct B(A):\n";
  }
  //Перетворення у присвоєнні: conversion from A (assignment):
  B& operator= (const A& x) {
       std::clog<<"assign B=A:\n";
  return *this;}
  /*Перетворення оператором перетворення:   conversion to A (type-cast operator) */
  operator A() {
    std::clog<<"conversion A(B):\n";
    return A();
   } // ми створили власний оператор переторення

  friend std::ostream& operator<< (std::ostream& out, const B& a){
      out<< "print B\n";
      return out;
   }

 void fn (B arg) {
    std::clog<<"use fn(B):\n"<<arg<<"\n";
 }
};

int main (){
  A foo;
  B bar = foo;    // викликає конструктор B(A)
  std::cout<<foo<<bar;
  bar = foo;      // викликає присвоєння B=A
  std::cout<<bar;
  foo = bar;      // викликає перетворення типу A(B)
  std::cout<<foo;

  bar.fn(bar);
  bar.fn(foo);
}

/*
construct B(A):
print A
print B
assign B=A:
print B
conversion A(B):
print A


use fn(B):
print B

construct B(A):
use fn(B):
print B

*/
