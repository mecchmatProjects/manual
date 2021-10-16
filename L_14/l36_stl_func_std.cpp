#include <iostream> 
#include <vector>
#include <algorithm> // mismatch, pair, copy
#include <numeric> // pair,partial_sum 
#include <functional> //less, multiplies

int main(){ 
  std::vector<double> v1, v2(4);
  double mas1[] ={1.3,2.3,1.0,4.1};
  v1.assign(4,1.1); // v1 = 1.1,1.1,1.1,1.1
  std::copy(mas1,mas1+4,v2.begin()); // v2 = 1.3,2.3,1.0,4.1 
  std::cout<<"v2=";
  for (std::vector<double>::iterator it = v2.begin(); it!=v2.end(); ++it)
     std::cout << ' ' << *it;
  std::cout <<"\n";
  std::cout<<"v1=";
  for (std::vector<double>::iterator it = v1.begin(); it!=v1.end(); ++it)
     std::cout << ' ' << *it;
  std::cout <<"\n";
  // функція mismatch з порівнянням за допомогою предікату less
  std::pair<std::vector<double>::iterator, std::vector<double>::iterator> it;
  it = std::mismatch (v1.begin(), v1.end(), v2.begin(), std::less<double>() );
  std::cout << "First pair that (v1 < v2): " << *it.first;
  std::cout << " and " << *it.second << '\n';

  std::vector<double> result(4);
   // часткова сума з допомогою предікату multiplies
  std::partial_sum (v2.begin(), v2.end(), result.begin(), std::multiplies<double>());
  std::cout << "partial multiplies of v2: ";
  for (int i=0; i<4; i++) std::cout << result[i] << ", ";
  std::cout << '\n';
}

