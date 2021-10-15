// count algorithm example
#include <iostream>     // std::cout
#include <algorithm>    // std::count
#include <vector>       // std::vector

int main () {
  // підрахуємо 10-ки серед елементів масиву:
  int myints[] = { 10, 20, 30, -40, 30, 30};
  double mas[] = {1.0, 2.0, -4.0, 3.0 }; 
  std::vector<int> myvector(mas,mas+4);

  int mycount = std::count (myints, myints+6, 30);
  std::cout << "10 appears " << mycount << " times.\n";

  // підрахуємо 20-ки серед елементів вектору:
  mycount = std::count (myvector.begin(), myvector.end(), 20);
  std::cout << "20 appears " << mycount  << " times.\n";;
}

