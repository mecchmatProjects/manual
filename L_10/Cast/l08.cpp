#include <iostream>
int main(){
  int* i;
  char *p = "This is a string";
  i = reinterpret_cast<int*> (p); // перетворення неспорыднений вказівників
  std::cout << *i;

}
