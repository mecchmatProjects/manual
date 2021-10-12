#include <iostream>
namespace NewNsOne{
      int p = 4;
      int funct(int q){
         std::cout<<"q="<<q;
      }
}

namespace NewNsTwo{
      int r = 6;
      int funct1(int numb);
      namespace InNewNsTwo      {
             long tst = 20.9456;
      }
}

 int main(){
      std::cout<<"NewNsOne::p is "<<(NewNsOne::p)<<(NewNsOne::funct(2))<<"\n";
      std::cout<<"NewNsTwo::r is "<<(NewNsTwo::r)<<"\n";
      std::cout<<"NewNsTwo::InNewNsTwo::tst is" << (NewNsTwo::InNewNsTwo::tst)<<"\n";
}


/*
q=2NewNsOne::p is 46295680
NewNsTwo::r is 6
NewNsTwo::InNewNsTwo::tst is20
*/
