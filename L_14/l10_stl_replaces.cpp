
// replace_copy example
#include <iostream>     // std::cout
#include <algorithm>    // std::replace_copy
#include <vector>       // std::vector
#include <cmath>

// друкує колекцію T
template <class T>
void printCollection(const T &v){
  for (typename T::const_iterator it=v.begin(); it!=v.end(); ++it){
    std::cout << " " << *it;
  }
  std::cout << "\n";
}

bool isSqr(int x){ // Істина, якщо х - повний квадрат
   int p = round(sqrt(x));
   return p*p == x;
}

int main () {
  int myints[] = { 10, 20, 30, 30, 20, 10, 10, 20 };

  std::vector<int> myvector (8);
  std::replace_copy (myints, myints+8, myvector.begin(), 20, 99);

  std::cout << "myvector contains:";
  /*for (std::vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';*/
  printCollection(myvector); 
  std::vector<int> v1,v2;

  // set some values:
  for (int i=1; i<10; i++) v1.push_back(i);          // 1 2 3 4 5 6 7 8 9

  v2.resize(v1.size());   // allocate space
  std::replace_copy_if (v1.begin(), v1.end(), v2.begin(), isSqr, 0);
                                                      // 0 2 3 0 5 6 7 8 0

  std::cout << "v2 contains:";
  printCollection(v2); 
}
