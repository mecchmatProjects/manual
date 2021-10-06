#include <iostream>
class Base{
public:
  void method()  {
    std::cout << "Base::usual()" << std::endl;
  }
  virtual void virtual_method()  {
    std::cout << "Base::virtual()" << std::endl;
  }
};
 
class Son : public Base{
public:
  void method()  {
    std::cout << "Son::usual()" << std::endl;
  }
  virtual void virtual_method()  {
    std::cout << "Son::virtual()" << std::endl;
  }
};
 
int main(){
  Base base;
  Son son;

  Base *p_base = &son;
  Son *p_son = &son;

  base.method(); // "Base::usual()"
  base.virtual_method(); // "Base::virtual()"
 
  son.method(); // "Son::usual()"
  son.virtual_method(); // "Son::virtual()"
  // Але тепер ….
  p_base->method();  // "Base::usual()"
  p_base->virtual_method();  // "Son::virtual()"!!!!
  p_son->method(); // "Son::usual()"
  p_son->virtual_method(); // "Son::virtual()"
}

