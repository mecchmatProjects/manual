
// пример использования typeid
#include <iostream>
#include <typeinfo>

class BaseClass {
  int a, b;
   virtual void f() {}; // BaseClass полиморфный
};
class Derived1: public BaseClass {
  int i, j;
};
class Derived2: public BaseClass {
  int k;
};
int main() {
  int i;
  BaseClass *p, baseob;
  Derived1 ob1;
  Derived2 ob2;
  
  std::cout << "Typeid of i is ";
  std::cout << typeid(i).name() << "\n";
  //typeid  поліморфними типами
  p = &baseob;
  std::cout << "p is pointing to an object of type "; // Base
  std::cout << typeid(*p).name()<<" and "<<std::boolalpha<< typeid(*p).before(typeid(baseob)) << "\n";
  p = &ob1;
  std::cout << "p is pointing to an object of type "<<typeid(*p).name(); // Dderived 1
  std::cout << std::boolalpha << (typeid(*p)== typeid(Derived1)) <<" and "<< typeid(*p).before(typeid(baseob))<< "\n";
  p = &ob2;
  std::cout << "p is pointing to an object of type ";
  std::cout << typeid(p).name() << "\n";
}
