#include <iostream>     // std::cout
#include <algorithm>    // std::remove_if
#include <vector>

bool IsPower2 (unsigned i) { // чи є число ступенем двійки 
  return (i & (i-1)) == 0; 
} 

template <class T>   // друк значень в заданому інтервалі
void printRange(T a, T b){
     std::cout << "the range contains:";
     while(a!=b){
          std::cout<<*a<<", ";
          ++a; 
     }
  std::cout << '\n';
}

// друкує колекцію T
template <class T>
void printCollection(const T &v){
  for (typename T::const_iterator it=v.begin(); it!=v.end(); ++it){
    std::cout << " " << *it;
  }
  std::cout << "\n";
}


int main () {
  unsigned myints[] = {1,2,3,4,5,6,7,8,9};            // 1 2 3 4 5 6 7 8 9

  // задаємо інтервал вказівниками
  unsigned* pbegin = myints;                          // вказівник на 1
  unsigned* pend = myints+sizeof(myints)/sizeof(int); // вказівник після 9

  pend = std::remove_if (pbegin, pend, IsPower2);   // 3, 5, 6, 7, 9 
  printRange(pbegin, pend);

  unsigned myints2[] = {10,20,30,30,20,10,10,20};      
  // задаємо інтервал
  pbegin = myints2;                          
  pend = myints2+sizeof(myints2)/sizeof(unsigned); 
  pend = std::remove(pbegin, pend, 20);         // 10, 30, 30, 10, 10, 
  
  printRange(pbegin, pend);
  unsigned myints3[] = {1,2,3,4,5,6,7,8,9};
  std::vector<unsigned> myvector (9);
  std::vector<unsigned>::iterator vend = std::remove_copy_if (myints3,myints3+9,myvector.begin(), IsPower2);
  // 3, 5, 6, 7, 9, 6, 7, 9, 0,  
  printRange(myvector.begin(), vend);
  printRange(myvector.begin(), myvector.end());

  // erase and remove:
  std::copy(myints3,myints3+9,myvector.begin());
  printRange(myvector.begin(), myvector.end());
  myvector.erase(std::remove_if(myvector.begin(), myvector.end(), IsPower2),myvector.end());
  printRange(myvector.begin(), myvector.end());
}
