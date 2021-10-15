// binary_search example
#include <iostream>     // std::cout
#include <algorithm>    // std::binary_search, std::sort
#include <vector>       // std::vector
#include <iterator>     // 
using namespace std;

bool comparator (int i,int j) { return (i<j); } // sort in opposite order

int main () {
  const int N = 8;
  int a2[N] ={1234,5432,8943,3346,9831,7842,8863,9820};
  cout << "Before sorting:";
  copy(a2, a2+N, ostream_iterator<int>(cout,  " ")); 
  cout << endl;  
  sort (a2, a2+N, Comparator);
  cout << "After sorting in descending order:"; 
  copy(a2, a2+N, ostream_iterator<int>(cout,  " ")); 
  cout << endl;

  if (binary_search(a2, a2 + N, 2, comparator))   // Comparator() - obligatory!!!             
    cout << "Element 2 found in the array";
  else 
    cout << "Element 2 not found in the array";

  copy(a2, a2+N, ostream_iterator<int>(cout,  " ")); 

  reverse(a2,a2+N); // or search with reverse
  cout<<"\n";
  copy(a2, a2+N, ostream_iterator<int>(cout,  " ")); 
  
  if (binary_search(a2, a2+N, 7842))
    cout << "Element 7842 found in the array";
  else 
    cout << "Element 7842 not found in the array";
}
