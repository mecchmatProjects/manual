#include <iostream>
#include <algorithm>
#include <vector>

// друкує колекцію T
template <class T>
void printCollection(const T &v){
  for (typename T::const_iterator it=v.begin(); it!=v.end(); ++it){
    std::cout << " " << *it;
  }
  std::cout << "\n";
}

class Increment{
     int num;
 public:
    Increment(int n): num(n) {}
    int operator()(int k){
    return num+k;
    }   
};

int main(){
  const int N = 8;
  int arr[N]={1234,5432,8943,3346,9831,7842,8863,9820}; 
  std::vector<int> arr2(arr,arr+N); 
  int to_add = 5;
  std::transform(arr, arr+N, arr, Increment(to_add));
  for(int i=0;i<N;++i)
     std::cout<<arr[i]<<",";
  std::cout<<"\n";  
  
  // Створення обэкту класу Increment
  Increment obj(to_add); 
  // виклики оператору ()
  std::transform(arr2.begin(), arr2.end(), arr2.begin(), obj); 

   for(int i=0;i<N;++i)
     std::cout<<arr2[i]<<",";
  std::cout<<"\n"; 

}
