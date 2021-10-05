// nothrow example
#include <iostream>     // std::cout
#include <new>          // std::nothrow
int main () {
  std::cout << "Attempting to allocate 1 MiB... ";
  char* p = new (std::nothrow) char [1048576];

  if (!p) {             // null вказівники implicitly переводяться до false
    std::cout << "Failed!\n";
  }
  else {
    std::cout << "Succeeded!\n";
    delete[] p;
  }
}

