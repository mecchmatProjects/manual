// adjacent_find example
#include <iostream>     // std::cout
#include <algorithm>    // std::adjacent_find
#include <vector>       // std::vector

template<typename T>
bool myEqual (T x, T y) {
  return (x-y)*(x-y)<0.0001;
}

int main () {
  float myarr[] = {5.0f,2.f,5.0f,3.0f,2.9999f,2.0f,1.0f,1.0001f,2.0f};
  std::vector<float> myvector2 (myarr,myarr+8);
  std::vector<float>::iterator it2;
  std::vector<int> myvector3(myarr,myarr+8);// 5,2,5,3,2,2,1,1
  std::vector<int>::iterator it3;

  // порівняння цілих за замовченням
  it3 = std::adjacent_find (myvector3.begin(), myvector3.end());

  if (it3!=myvector3.end())
    std::cout << "the first value of repeated elements are: " << *it3 << '\n';

  //використовуючи власне порівняння-предикат
  it2 = std::adjacent_find (myvector2.begin(), myvector2.end(), myEqual<float>);

  if (it2!=myvector2.end())
    std::cout << "the first value of almost repeated elements are: " << *it2 << '\n';
}
