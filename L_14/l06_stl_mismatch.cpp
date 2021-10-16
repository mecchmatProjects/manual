// mismatch algorithm example
#include <iostream>     // std::cout
#include <algorithm>    // std::mismatch
#include <vector>       // std::vector
#include <utility>      // std::pair

// порівняння лише 2 останніх розрядів
bool last2DigitsCmp (int i, int j) {
  return (i%100 == j % 100);
}

int main () {
  int mydata[] = {10, 20, 30, 40, 50};
  std::vector<int> myvector(mydata,mydata + 5);// myvector: 10 20 30 40 50
  
  int myints[] = {10,120,130,320,1024};                //   myints: 10 120 130 320 1024

  std::pair<std::vector<int>::iterator,int*> mypair;

  // порівняння звичайною рівністю:
  mypair = std::mismatch (myvector.begin(), myvector.end(), myints);
  std::cout << "Mismatching pair: " << *mypair.first;
  std::cout << " , " << *mypair.second << '\n';

  ++mypair.first; ++mypair.second;

  // using predicate comparison:
  mypair = std::mismatch (mypair.first, myvector.end(), mypair.second, last2DigitsCmp);
  std::cout << "2nd mismatching 2 digits pair(): " << *mypair.first;
  std::cout << " , " << *mypair.second << '\n';
}
