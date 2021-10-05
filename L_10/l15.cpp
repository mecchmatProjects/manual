// Приклад відловлення bad_typeid  exception 
#include <iostream>       // std::cerr
#include <typeinfo>       // operator typeid
#include <exception>      // std::exception

class Polymorphic {
virtual void member(){}
};
int main () {
  try  {
    Polymorphic * pb = 0;
    typeid(*pb);  // Буде bad_typeid exception
  }
  catch (std::exception& e)  {
    std::cerr << "exception caught: " << e.what() << '\n';
  }
  return 0;
}
