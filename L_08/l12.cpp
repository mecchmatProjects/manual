#include <iostream>
using namespace std;
 
class Line {
   public:
      void setLength( double len );
      double getLength( void );
      Line();  // Це конструктор
   private:
      double length;
};
 
// Визначимо якусь дію всередині конструктора
Line::Line(void) {
   cout << "Object is being created" << endl;
}
void Line::setLength( double len ) {
   length = len;
}
double Line::getLength( void ) {
   return length;
}

int main() {
   Line line; // конструктор створює лінію
   line.setLength(6.0);
   cout << "Length of line : " << line.getLength() <<endl;
   return 0;
}

