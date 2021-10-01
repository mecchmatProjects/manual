#include <iostream>
using namespace std;
class Line {
   public:
      void setLength( double len );
      double getLength( void );
      Line();   // Декларація конструктору
      ~Line();  // Декларація деструктору
   private:
      double length;
};
 
// Визначення методів, зокрема конструктору та деструктору
Line::Line(void) {
   cout << "Object is being created" << endl;
}
Line::~Line(void) {
   cout << "Object is being deleted" << endl;
}
void Line::setLength( double len ) {
   length = len;
}
double Line::getLength( void ) {
   return length;
}

int main() {
   Line line;
   // встановити довжину
   line.setLength(6.0);
   cout << "Length of line : " << line.getLength() <<endl;
   return 0;
}
