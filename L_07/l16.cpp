// modify boolalpha flag
#include <iostream>     // std::cout, std::boolalpha, std::noboolalpha

int main () {
  bool a= true, b = (1==0);
  bool c = 42, d = false;
  std::cout << std::boolalpha << a << ","<< b << '\n';
  std::cout << std::noboolalpha << c << "," <<d <<'\n';
}
