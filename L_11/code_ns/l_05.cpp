// namespace extension
#include <iostream>

struct SampleOne
{ };
struct SampleTwo
{ };
// оригінальний простір імен namespace
namespace NsOne{
  // оригінальна функція
  void FunctOne(struct SampleOne){
    std::cout<<"Processing struct..."<<endl;
  }
}
using NsOne::FunctOne; // використання using-declaration...
// розширення простору NsOne
namespace NsOne{// перевантажена (overloaded) функція...
void FunctOne(SampleTwo& x){
  std::cout<<"Processing function..."<<endl; }
}
int main(){
  SampleOne TestStruct;
  SampleTwo TestClass;
  FunctOne(TestStruct);
  // Ця функція не запрацює, бо нема її перевантаженого екземпляру
  // FunctOne(TestClass);
}



