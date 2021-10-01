#include <iostream>
 using namespace std;
class Box {
   public:
      static int objectCount;
      // Конструктор
      Box(double l = 2.0, double b = 2.0, double h = 2.0) {
         cout <<"Constructor called." << endl;
         length = l;
         breadth = b;
         height = h;
         // збільшуємо на одиницю лічильник об’єктів для кожного обєкту
         objectCount++;
      }
      double Volume() {
         return length * breadth * height;
      }
      static int getCount() { // статичний метод для виведення лічильника
         return objectCount;
      }
   private:
      double length;
      double breadth;
      double height;
};

// Ініціалізація статичного члену потрібна в будь-якому файлі що використовує лічильник
int Box::objectCount = 0;

int main(void) {
   // Друкуємо загальну кількість обєктів
   cout << "Inital Stage Count: " << Box::getCount() << endl;

   Box Box1(3.3, 1.2, 1.5);
   Box Box2(8.5, 6.0, 2.0);

// Друкуємо загальну кількість обєктів
   cout << "Final Stage Count: " << Box::getCount() << endl;

   return 0;
}
