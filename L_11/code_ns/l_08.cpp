// Директива using 
#include <iostream>
using namespace std;
namespace One
{    float p = 3.1234;    }

namespace Two {
       using namespace One;
      float q = 4.5678;
      namespace InTwo
       {    float r = 5.1234;    }
}

int main(){
       // використання всіх змінних з Two
       using namespace Two;

       // доступ лише до вкладеного підпростору імен InTwo
       using namespace Two::InTwo;

      // локальна змінна
       float p = 6.12345;
       cout<<"p = "<<p<<endl;
       cout<<"q = "<<q<<endl;
       cout<<"r = "<<r<<endl;
}
/*
p = 6.12345
q = 4.5678
r = 5.1234
*/
