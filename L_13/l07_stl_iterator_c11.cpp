#include<iostream> 
#include<iterator> // для методів iterator(advance)
#include<vector> // для vector 

template <class Coll>
void printColl(const Coll & v){
 for(const auto & x: v){
  std::cout<< x <<" ";
}
std::cout<<"\n";
}

int main(){ 
 std::vector<int> ar = { 1, 2, 3, 4, 5 }; 

 //декларація початкового та кінцевого ітератору
 std::vector<int>::iterator ptr = begin(ar); 
 std::vector<int>::iterator ftr = end(ar); 

  //  next() для отримання нового ітератору 
  // що вказує на 4 
  auto it = next(ptr, 3); 

  // prev() для отримання нового ітератору  
  // що вказує на 3 
  auto it1 = prev(ftr, 3); 

  // позиція ітертору 
  std::cout << "New iterator using next() position: "; 
  std::cout << *it << " \n"; 
 
  // Displaying iterator position 
  std::cout << "New iterator using prev() position: "; 
  std::cout << *it1 << " \n"; 


  int arrayInt[] = {10,20,30,40,50, 60};
  std::vector<int> vectorInt;

  // iterate arrayInt: dcfdrf vectorInt
 // Обережно: вимагається об розмір arrayInt був парним!!!!!
  for (auto it = std::begin(arrayInt); it!=std::end(arrayInt); std::advance(it,2))
    vectorInt.push_back(*it);

  // iterate bar: print contents:
  std::cout << "vector contains:";
  /*for (auto it = std::begin(bar); it!=std::end(bar); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';
*/
  for(auto &x:vectorInt)std::cout << x <<" ";
}
