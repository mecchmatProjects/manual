#include <iostream>     // std::cout
#include <algorithm>    // std::for_each
#include <vector>       // std::vector

template<typename T>
void myfunction(T i) {  // функція над елементом послідовності
  std::cout << " " << ((i>0)?"positive ":"negative ");
}

int main () {
  double mas[] = {1.0, 2.0, -4.0, 3.0}; 
  std::vector<int> myvector(mas,mas+4);

  std::cout << "myvector signs:";
  std::for_each (myvector.begin(), myvector.end(), myfunction<int>);
  std::cout << "\narray signs:";
  std::for_each (mas, mas+4, myfunction<double>);
}
