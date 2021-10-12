//
#include <iostream>
using namespace std; // підключаємо стандартний простір імен

namespace SampleOne{ // перший простір імен
       float p = 10.34;
}
 
namespace SampleTwo{ // другий простір імен

       using namespace SampleOne; // використовуємо перший простір всередині другого
       float q = 77.12;

       namespace InSampleTwo   { // вкладений простір імен
              float r = 34.725;
       }
}

int main(){
       // ця директива підключає декларації змінних з SampleTwo
       using namespace SampleTwo;

       // ця директива підключає лише декларації змінних внутрішнього простору  InSampleTwo
       using namespace SampleTwo::InSampleTwo;

       // локальна декларація, має пріоритет
       float p = 23.11;
       cout<<"p = "<<p<<endl;
       cout<<"q = "<<q<<endl;
       cout<<"r = "<<r<<endl;
}

/*
p = 23.11
q = 77.12
r = 34.725
*/

