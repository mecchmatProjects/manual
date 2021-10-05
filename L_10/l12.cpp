// повторна генерація виключення
#include <iostream>

void Xhandler(){
  try {
    throw "first"; // генерация char *
    }
   //помилка 1
  catch (const char*) { // перехват char *
   std::cout << "Caught 1st char * exception inside Xhandler\n";
     throw "second"; // повторная генерация char * извне функции
  }
}
int main(){
 std::cout << "Start\n";
  try{
     Xhandler();
   }
  //помилка 2
  catch(const char *) {
    std::cout << "Caught 2nd char * exception inside main\n";
   }
  std::cout << "End\n";
}

/*
Start
Caught 1st char * exception inside Xhandler
Caught 2nd char * exception inside main
End

*/
