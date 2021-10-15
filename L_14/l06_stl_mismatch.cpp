// mismatch algorithm example
#include <iostream>     // std::cout
#include <algorithm>    // std::mismatch
#include <vector>       // std::vector
#include <utility>      // std::pair

bool myPredicate (int i, int j) {
  return (i==j);
}

int main () {
  int mydata = {10, 20, 30, 40, 50};
  std::vector<int> myvector(mydata,mydata + 5);// myvector: 10 20 30 40 50
  
  int myints[] = {10,20,80,320,1024};                //   myints: 10 20 80 320 1024

  std::pair<std::vector<int>::iterator,int*> mypair;

  // using default comparison:
  mypair = std::mismatch (myvector.begin(), myvector.end(), myints);
  std::cout << "First mismatching pair: " << *mypair.first;
  std::cout << " , " << *mypair.second << '\n';

  ++mypair.first; ++mypair.second;

  // using predicate comparison:
  mypair = std::mismatch (mypair.first, myvector.end(), mypair.second, mypredicate);
  std::cout << "Second mismatching pair: " << *mypair.first;
  std::cout << " , " << *mypair.second << '\n';
}
