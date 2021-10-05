#include <iostream>
using namespace std;
class Box {
   public:
      double getVolume(void) {
         return length * breadth * height;
      }
      void setLength( double len ) {
         length = len;
      }
      void setBreadth( double bre ) {
         breadth = bre;
      }
      void setHeight( double hei ) {
         height = hei;
      }
      
      // Overload + operator to add two Box objects.
      Box operator+(const Box& b) {
         Box box;
         box.length = this->length + b.length;
         box.breadth = this->breadth + b.breadth;
         box.height = this->height + b.height;
         return box;
      }
      
   private:
      double length;      
      double breadth;   
      double height;      
};
int main() {
   Box Box1;                // Змінна Box1 класу Box
   Box Box2;                // Змінна Box2 класу Box
   Box Box3;                // Змінна Box3 класу Box
   double volume = 0.0;     // Змінна для обєму
 
   // box 1 ініціалізація
   Box1.setLength(6.0);
   Box1.setBreadth(7.0);
   Box1.setHeight(5.0);
 
   // box 2 ініціалізація
   Box2.setLength(12.0);
   Box2.setBreadth(13.0);
   Box2.setHeight(10.0);
 
   // обєм Box1 1
   volume = Box1.getVolume();
   cout << "Volume of Box1 : " << volume <<endl;
 
   // обєм box 2
   volume = Box2.getVolume();
   cout << "Volume of Box2 : " << volume <<endl;

   // Додати два обєкти перевантеженим додаванням
   Box3 = Box1 + Box2;

   // Обєм результату 3
   volume = Box3.getVolume();
   cout << "Volume of Box3 : " << volume <<endl;

   return 0;
}
