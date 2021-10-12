
#include <iostream>

void print (char * str){
  std::cout << str << '\n';
}

void func(const int* arr){
  std::cout<<arr[0]<<"ok\n";
}
int main () {
  const char * c = "sample text";
  print( const_cast<char *> (c));

  int* arr = new int[1000];
  func(const_cast<const int*>(arr));
  delete[] arr;
}
