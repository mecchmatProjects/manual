#include <iostream>
using namespace std;
 
class Line {
   public: // декларація членів та методів
      double length;
      void setLength( double len );
      double getLength( void );
};
 
// Визначення  методів
double Line::getLength(void) {
   return length ;
}
 
void Line::setLength( double len) {
   length = len;
}
 
int main() {
   Line line;
   // встановити довжину за допомогою публічного  методу
   line.setLength(6.0);
   cout << "Length of line : " << line.getLength() <<endl;
 
   // встановити довжину за допомогою доступу до публічного члену
   line.length = 10.0; // OK: because length is public
   cout << "Length of line : " << line.length <<endl;
   return 0;
}
