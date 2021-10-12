// анонімний простір імен
#include <iostream>

// Простір імен без назви (anonymous namespace)
namespace{
   int p = 1; // anonymous::p
}

void funct1(){
  ++p; // anonymous::++p
}

namespace One{
  // вкладений анонімний простір
  namespace{
    int p;
    // One::anonymous::p
    int q = 3; // One::anonymous::q
   }
}
// використання using-declaration
using namespace One;
void testing(){
  // ++p;
  // помилка: anonymous::p або One::anonymous::p?
  // One::++p; // помилка , One::p - невизначене (undefined)
  std::cout<<"++q = "<<++q<<"\n";
}

int main(){
  testing();
}

/*++q = 4*/
