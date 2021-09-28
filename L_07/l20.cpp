#include <iostream>
#include <ctime>

double vals[] = {10.1, 12.6, 33.1, 24.1, 50.0};
double& setValues( int i ) {
   return vals[i];   // повертає посилання на i-ий елемент
}
// головна функція
int main () {
   std::cout << "Value before change" << std::endl;
   for ( int i = 0; i < 5; i++ ) {
      std::cout << "vals[" << i << "] = ";
      std::cout << vals[i] << std::endl;
   }
 
   setValues(1) = 20.23; // змінює 2-ий елемент
   setValues(3) = 70.8;  // змінює 4-ий елемент
 
   std::cout << "Value after change" << std::endl;
   for ( int i = 0; i < 5; i++ ) {
      std::cout << "vals[" << i << "] = ";
      std::cout << vals[i] << std::endl;
   }
   return 0;
}

