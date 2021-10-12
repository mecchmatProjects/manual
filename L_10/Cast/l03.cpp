// explicit:
#include <iostream>
using namespace std;

class A {};

class B {
public:
  explicit B (const A& x) {}
  B& operator= (const A& x) {return *this;}
  operator A() {return A();}
};

void fn(B x) {}

int main (){
  A foo;
  B bar (foo);
//  B bar2 =foo; //error: conversion from ‘A’ to non-scalar type ‘B’ requested   B bar2 =foo;
  bar = foo;
  foo = bar;
  
  //fn (foo);  // not allowed for explicit ctor – не дозволено при explicit 
  fn (bar);  
}
