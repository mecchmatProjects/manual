// generate algorithm example
#include <iostream>     // std::cout
#include <algorithm>    // std::generate
#include <vector>       // std::vector
#include <ctime>        // std::time
#include <cstdlib>      // std::rand, std::srand

// друкує колекцію T
template <class T>
void printCollection(const T &v){
  for (typename T::const_iterator it=v.begin(); it!=v.end(); ++it){
    std::cout << " " << *it;
  }
  std::cout << "\n";
}
// function generator:
int RandomNumber () { return (std::rand()%100); }

// class generator:
struct c_unique {
  int current;
  c_unique() {current=0;}
  int operator()() {return ++current;}
} UniqueNumber;

int main () {
  std::srand ( unsigned ( std::time(0) ) );

  std::vector<int> v1 (8);

  std::generate (v1.begin(), v1.end(), RandomNumber);

  std::cout << "v1 random contains:";
  printCollection(v1); 

  std::generate (v1.begin(), v1.end(), UniqueNumber);

  std::cout << "v1 unique contains:";
  printCollection(v1); 
}

