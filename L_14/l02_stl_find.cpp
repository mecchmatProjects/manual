#include <iostream>     // std::cout
#include <algorithm>    // std::find
#include <vector>       // std::vector

int main () {
  int myints[] = { 10, 20, 30, -40, 30};
  int * p;
  // пошук в масиві — результат вказівник
  p = std::find (myints, myints+5, 30);
  if (p != myints+5)
    std::cout << "Element found in myints: " << *p << '\n';
  else
    std::cout << "Element not found in myints\n";

  double mas[] = {1.0, 2.0, -4.0, 3.0}; 
  std::vector<int> myvector(mas,mas+4);
  std::vector<int>::iterator it;
// пошук в векторі — результат ітератор
  it = std::find (myvector.begin(), myvector.end(), 30);
  if (it != myvector.end())
    std::cout << "Element found in myvector: " << *it << '\n';
  else
    std::cout << "Element not found in myvector\n";
}

