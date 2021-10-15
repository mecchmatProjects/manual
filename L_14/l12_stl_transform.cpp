// transform algorithm example
#include <iostream>     // std::cout
#include <algorithm>    // std::transform
#include <vector>       // std::vector
#include <functional>   // std::plus

int increment(int i) { 
 return ++i; 
}

int add(int x, int y){
   return x+y;
}

int main () {
  int mas[]={1,10,100,1000,10000 };
  std::vector<int> v1(mas,mas+5);// v1: 1,10,100,1000,10000
  std::vector<int> v2;
                 
  v2.resize(v1.size());                         // allocate space

  std::transform (v1.begin(), v1.end(), v2.begin(), increment);
                                                  // v2: 2,11,101,1001,10001
  std::cout<<"v2 =";
  for (std::vector<int>::iterator it=v2.begin(); it!=v2.end(); ++it)
    std::cout << " " << *it;
  std::cout << "\n";

  // std::plus додає два елементи:
  std::transform (v1.begin(), v1.end(), v2.begin(), v1.begin(), add);
                                                  // v1: 21 41 61 81 101

  std::cout << "v1 =";
  for (std::vector<int>::iterator it=v1.begin(); it!=v1.end(); ++it)
    std::cout << " " << *it;
  std::cout << "\n";
}
