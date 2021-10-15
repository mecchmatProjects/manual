// equal algorithm example
#include <iostream>     // std::cout
#include <algorithm>    // std::equal
#include <vector>       // std::vector

bool mypredicate (int i, int j) {
  return (abs(i-j)<=3);
}

void printIfVectorsEqual(bool cond){
  if (cond)
    std::cout << "Sequences are equal.\n";
  else
    std::cout << "Sequences are differ.\n";
}

int main () {
  int myints[] = {20,40,60,80,100};               //   myints: 20 40 60 80 100
  std::vector<int>myvector (myints,myints+5);     // myvector: 20 40 60 80 100

  myvector[3]=81;                                 // myvector: 20 40 60 81 100
  // using default comparison:
  printIfVectorsEqual( std::equal (myvector.begin(), myvector.end(), myints) )
  // using predicate comparison:
  printIfVectorsEqual( std::equal (myvector.begin(), myvector.end(), mypredicate) )  
}
