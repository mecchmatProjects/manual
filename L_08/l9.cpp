#include <iostream>

using namespace std;

class Box {
   public:  // декларація членів класу
      double length;         // Length of a box
      double breadth;        // Breadth of a box
      double height;         // Height of a box

      // Декларація методів
      double getVolume(void);
      void setLength( double len );
      void setBreadth( double bre );
      void setHeight( double hei );
};

// Визначення методів
double Box::getVolume(void) {
   return length * breadth * height;
}

void Box::setLength( double len ) {
   length = len;
}
void Box::setBreadth( double bre ) {
   breadth = bre;
}
void Box::setHeight( double hei ) {
   height = hei;
}
// Головна функція
int main() {
   Box Box1;                // Декларація Box1 типу Box
   Box Box2;                // тобто декларація обєкту Box2 класу Box
   double volume = 0.0;     // змінна для зберігання згачення обєму
 
   // box1 специфікація
   Box1.setLength(6.0);
   Box1.setBreadth(7.0);
   Box1.setHeight(5.0);

   // box 2 specification
   Box2.setLength(12.0);
   Box2.setBreadth(13.0);
   Box2.setHeight(10.0);

   // отримаємо обєм box 1
   volume = Box1.getVolume();
   cout << "Volume of Box1 : " << volume <<endl;

   // обєм box 2
   volume = Box2.getVolume();
   cout << "Volume of Box2 : " << volume <<endl;
   return 0;
}
