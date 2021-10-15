// count_if 
#include <iostream>     // std::cout
#include <algorithm>    // std::count_if
#include <vector>       // std::vector

bool isOdd (int i) { 
  return ((i%2)==1); 
}

int main () {
  std::vector<int> myvector4;
  for (int i=1; i<10; i++) myvector4.push_back(i); // myvector: 1 2 3 4 5 6 7 8 9

  int mycount = count_if (myvector4.begin(), myvector4.end(), isOdd);
  std::cout << "myvector contains " << mycount  << " odd values.\n";
}
