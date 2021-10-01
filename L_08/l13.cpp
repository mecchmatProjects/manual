#include <iostream>

using namespace std;
class Line {
   public:
      void setLength( double len );
      double getLength( void );
      Line(double len);  // Це також конструктор
   private:
      double length;
};
 
// Визначення конструктора та інших функцій
Line::Line( double len) {
   cout << "Object is being created, length = " << len << endl;
   length = len;
}
/*
Line::Line( double len): length(len) {
   cout << "Object is being created, length = " << len << endl;
}
*/
void Line::setLength( double len ) {
   length = len;
}
double Line::getLength( void ) {
   return length;
}

int main() {
   Line line(10.0); // виклик конструктору
    // отиримуємо встановлену конструктором довжину
   cout << "Length of line : " << line.getLength() <<endl;
   // змінюємо довжину
   line.setLength(6.0);
   cout << "Length of line : " << line.getLength() <<endl;
   return 0;
}
