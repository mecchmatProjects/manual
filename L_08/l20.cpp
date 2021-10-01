
#include <iostream>
using namespace std;

class Box {
   public:
      // Конструктор
      Box(double l = 2.0, double b = 2.0, double h = 2.0) {
         cout <<"Constructor called." << endl;
         length = l;
         breadth = b;
         height = h;
      }
      double Volume() {
         return length * breadth * height;
      }
      
   private:
      double length;     // Length of a box
      double breadth;    // Breadth of a box
      double height;     // Height of a box
};

int main(void) {
   Box Box1(3.3, 1.2, 1.5);    // Визначили box1
   Box Box2(8.5, 6.0, 2.0);    // Визначили box2
   Box *ptrBox;                // Визначили вказівник на клас Box

   // Взяли адресу першого обєкту
   ptrBox = &Box1;

   // Доступ до даних через публічні методи
   cout << "Volume of Box1: " << ptrBox->Volume() << endl;
   // Беремо вказівник – інший обєкт
   ptrBox = &Box2;
   // Отримаємо доступ до нього через вказівник
   cout << "Volume of Box2: " << ptrBox->Volume() << endl;
   return 0;
}

