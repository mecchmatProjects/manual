
#include <iostream>
#include <cstring>

template <typename T> T maxArray(const T* array, size_t size){
  T max = array[0];
  for (size_t i = 1; i < size; i++)
	if (max < array[i])
		max = array[i];
  return max;
}
int main(){
  char array [] = "aodsiafgerkeio";
  int len = strlen(array);
  std::cout << "Максимальний елемент масиву типу char: " << maxArray(array, len) << "\n";
  int iArray [5] = {3,5,7,2,9};
  std::cout << " Максимальний елемент масиву типу int: " << maxArray(iArray, 5) << "\n";

  std::string sArray[]= {"sadd","sadfsa"};
  std::cout << "Максимальний елемент масиву типу рядок: " << maxArray(sArray, 2) << "\n";
}
