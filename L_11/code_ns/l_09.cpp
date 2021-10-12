// Декларція using :
// функція funct2() визначена в двох різних просторах

#include <iostream>

using std::cout;

namespace NSOne{

       float funct1(float q) {
             return q;    
         }
      // перше визначення funct2() 
      void funct2()  {
             cout<<"namespace NSOne, funct2() function\n";    
      }
 }

namespace NSTwo{
       // друге визначення funct2() 
       void funct2(){
        cout<<"namespace NSTwo, funct2() function\n";    }
       }
 
int main(){
      // використання using визначає версію funct2()
      using NSOne::funct1;     // визначає версію
      using NSTwo::funct2;     // визначає версію

      float p = 4.556;           // локальна змінна
      cout<<"First p value, local = "<<p<<"\n";
      p = funct1(3.422);

      cout<<"Second p value, by function call = "<<p<<"\n";
      funct2();
}
/*
First p value, local = 4.556
Second p value, by function call = 3.422
namespace NSTwo, funct2() function

*/
