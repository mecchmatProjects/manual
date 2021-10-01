#include <iostream>
using namespace std;
class Box {
   public:
      static int objectCount; // статичний член – лічильник об’єктів
      // Конструктор
      Box(double l = 2.0, double b = 2.0, double h = 2.0) {
         cout <<"Constructor called." << endl;
         length = l;
         breadth = b;
         height = h;
         // збільшуємо на одиницю лічильник об’єктів
         objectCount++;
      }
      double Volume() {
         return length * breadth * height;
      }
      
   private:
      double length;     // Length of a box
      double breadth;    // Breadth of a box
      double height;     // Height of a box
};

// Інціалізуємо статичний член класу
int Box::objectCount = 0;

int main(void) {
   Box Box1(3.3, 1.2, 1.5);    
   Box Box2(8.5, 6.0, 2.0);    
   // Друкуємо загальну кількість обєктів
   cout << "Total objects: " << Box::objectCount << endl;
   return 0;
}
