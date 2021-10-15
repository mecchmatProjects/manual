
// stable_partition example
#include <iostream>     // std::cout
#include <algorithm>    // std::partition
#include <vector>       // std::vector


bool isOdd (unsigned i) {
 return i & 1;
}

template <class T>
void printRangeVector(const T start, const T end ){
  for (T it=start; it!=end; ++it){
    std::cout << " " << *it;
  }
  std::cout << "\n";
}

int main () {
  std::vector<unsigned> myvector;
  // set some values:
  for (unsigned i=1; i<10; ++i) myvector.push_back(i); // 1 2 3 4 5 6 7 8 9

  std::vector<unsigned>::iterator bound;
  bound = std::stable_partition (myvector.begin(), myvector.end(), isOdd);

  // print out content:
  std::cout << "odd elements:";
  printRangeVector(myvector.begin(), bound);

  std::cout << "even elements:";
  printRangeVector(bound,myvector.end());
}
