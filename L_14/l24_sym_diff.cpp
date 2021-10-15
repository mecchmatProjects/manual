// set_symmetric_difference example
#include <iostream>     // std::cout
#include <algorithm>    // std::set_symmetric_difference, std::sort
#include <vector>       // std::vector
#include <set>

// друкує колекцію T
template <class T>
void printCollection(const T &v){
  for (typename T::const_iterator it=v.begin(); it!=v.end(); ++it){
    std::cout << " " << *it;
  }
  std::cout << "\n";
}

int main () {
  int col1[] = {5,10,15,20,25};
  int mas2[] = {50,40,30,20,10};
  std::vector<int> v1,v2,v3;                      // 0  0  0  0  0  0  0  0  0  0
  v1.resize(10);v2.resize(5);v3.resize(10);
  std::set<int> col2(mas2, mas2+5);
  //std::vector<int>::iterator it;

  std::sort (col1,col1+5);     //  5 10 15 20 25
  //std::sort (second,second+5);   // 10 20 30 40 50
  
  std::set_symmetric_difference (col1, col1+5, col2.begin(), col2.end(), v1.begin());
  std::cout<<"symmetric difference v1 = col1, coll2:";
  printCollection(v1);

  std::set_difference (col1, col1+5, col2.begin(), col2.end(), v2.begin());
  std::cout<<"difference (5 items - 2 are extra) v2:";
  printCollection(v2);
  
  std::vector<int>::iterator it =std::set_union (col1, col1+5, col2.begin(), col2.end(), v3.begin());
  v3.erase(it,v3.end()); // remove extra items
  std::cout<<"union v3:";
  printCollection(v3);
   
  it = std::set_intersection(v1.begin(), v1.end(), v3.begin(), v3.end(), v1.begin());
  v1.erase(it,v1.end()); //// remove extra items
  std::cout<<"intersecton v1,v3:";
  printCollection(v1); 
}
