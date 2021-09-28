#include <iostream>

int main () {
   //декларуємо звичайні змінні 
   int    i;
   double d;
   // декларуємо змінні-посилання
   int&    r = i;
   double& s = d;
   
   i = 5;
   std::cout << " i= " << i << std::endl;
   std::cout << " i reference = " << r  << std::endl;
 
   d = 11.7;
   std::cout << " d = " << d << std::endl;
   std::cout << " d reference = " << s  << std::endl;
}
