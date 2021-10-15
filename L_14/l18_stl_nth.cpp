#include <iostream>     // std::cout
#include <algorithm>    // std::nth_element, std::random_shuffle
#include <vector>       // std::vector

// друкує колекцію T
template <class T>
void printCollection(const T &v){
  for (typename T::const_iterator it=v.begin(); it!=v.end(); ++it){
    std::cout << " " << *it;
  }
  std::cout << "\n";
}

bool my_comparison (int i,int j) { return (i>j); }

int main () {
  int mas[] = {1,2,3,4,5,6,7,8,9};
  std::vector<int> myvector(mas,mas+9);

  std::random_shuffle (myvector.begin(), myvector.end());
  std::cout<<"v=";
  printCollection(myvector);
  // використвоуючи порівняння(operator <):
  std::nth_element (myvector.begin(), myvector.begin()+5,myvector.end());
  std::cout<<"v (v[5]=6):";
  printCollection(myvector);
  // використовуючи порівняння my_comparison
  std::nth_element(myvector.begin(),myvector.begin()+5,myvector.end(),my_comparison);
 std::cout<<"v v[5] =4:";
  printCollection(myvector);
}
