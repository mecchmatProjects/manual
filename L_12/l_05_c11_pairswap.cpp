//pair STL 
#include <iostream> 
#include <utility> 

int main(){
  std::pair<char, int>pair1 = std::make_pair('A', 1);
  std::pair<char, int>pair2 = std::make_pair('B', 2);
  std::cout << "Before swap:\n ";
  std::cout << "Pair1 = "<< pair1.first << " "<< pair1.second <<"\t" ;
  std::cout << "Pair2 = "<< pair2.first << " "<< pair2.second;
  pair1.swap(pair2);
  
  std::cout << "\nAfter swapping:\n ";
  std::cout << "Pair1 = "<< pair1.first << " "<< pair1.second <<"\t" ;
  std::cout << "Pair2 = "<< pair2.first << " "<< pair2.second;
}
