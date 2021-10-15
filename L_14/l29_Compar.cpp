#include <iostream>
#include <set>
#include <cmath>

// друкує колекцію T
template <class T>
void printCollection(const T &v){
  for (typename T::const_iterator it=v.begin(); it!=v.end(); ++it){
    std::cout << " " << *it;
  }
  std::cout << "\n";
}
//class Comparator
struct Classcomp {
  bool operator() (const int& lhs, const int& rhs) const {
    return std::abs(lhs)<=std::abs(rhs);
  }
};


int main (){
  int mas[]= {-3,-1,2,1,5};
  std::set<int,Classcomp> fifth_set;                 // class as Compare
  for(int i=0;i<5;++i){
    fifth_set.insert(mas[i]);
  }

  printCollection(fifth_set);
}
