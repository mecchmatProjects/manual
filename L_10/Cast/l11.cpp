// typeid, polymorphic class
#include <iostream>
#include <typeinfo>
#include <exception>

class Base { virtual void f(){} };
class Derived : public Base {};

int main () {
  try {
    Base* a = new Base;
    Base* b = new Derived;
    std::cout << "a is: " << typeid(a).name() << '\n';
    std::cout << "b is: " << typeid(b).name() << '\n';
    std::cout << "*a is: " << typeid(*a).name() << '\n';
    std::cout << "*b is: " << typeid(*b).name() << '\n';
  } catch (std::exception& e) { 
     std::cout << "Exception: " << e.what() << '\n'; 
 }

}
