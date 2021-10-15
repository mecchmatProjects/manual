
// use c++11
#include <iostream>     // std::cout, ostream_iterator
#include <algorithm>    // std::copy
#include <vector>       // std::vector
#include <iterator>     //ostream_iterator

template<class V,typename T> void printCont(const V & s, T val){
   std::copy (s.begin(), s.end(),  std::ostream_iterator<T>(std::cout, " ,"));  
   std::cout<<"\n";    
}
int main () {
  int myints[]={10,20,30,40,50,60,70};
  std::vector<int> myvector (7);
  std::vector<int> myvector2(8);

  std::copy( myints, myints+7, myvector.begin() );
  std::cout << "myvector contains:";
  printCont(myvector, myvector.at(0)); 
  std::cout<<"\n"; 
  std::copy_backward( myvector.begin()+3, myvector.end(), myvector.end()-3 );
  printCont(myvector, myvector.at(0)); 

  std::copy_n( myvector.begin()+3, 3, myvector2.begin());
  printCont(myvector2, myvector2.at(0)); 
  auto it = std::copy_if (myvector.begin(), myvector.end()-5, 
                          myvector2.begin()+3, [](int x){return x%20==0;} );
                          // використовуємо лямбду – остача від ділення на 20
  printCont(myvector2, myvector2.at(0)); 
  it--;
  std::cout<<"*it="<<*it;
}
