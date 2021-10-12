#include <cstdio>
#include <iostream>

class Base {
    public:
    int x;
    Base(int x_):x(x_){}
};
class Derived: public Base {
    public:
 int y; 
   Derived(int x_, int y_):Base(x_),y(y_){}
};

int main(int argc, char **argv){
  Base * a = new Base(1);
  Derived * b = static_cast<Derived*>(a);
  std::cout<<"Derived(x,y):"<<b->x<<","<<b->y<<std::endl;


  Base a2(1);
  //Derived b2 = static_cast<Derived>(a2);
  Derived a3(2,2);
  Base b3 = static_cast<Base>(a3);
  std::cout<<"Base(x):"<< b3.x<<std::endl;

  Derived * a4 = new Derived(1,1);
  Base * b4 = static_cast<Base*>(a);
  std::cout<<"Base(x):"<< b4->x<<std::endl;
}
/* 
Derived(x,y):1,0
Base(x):2
Base(x):1
*/
