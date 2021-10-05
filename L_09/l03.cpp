#include <iostream>
using namespace std;

// Базовий клас Shape
class Shape {
   public:
      void setWidth(int w) {
         width = w;
      }
      void setHeight(int h) {
         height = h;
      }
      
   protected:
      int width;
      int height;
};

// Базовий клас PaintCost
class PaintCost {
   public:
      int getCost(int area) {
         return area * 70;
      }
};

// Клас нащадок
class Rectangle: public Shape, public PaintCost {
   public:
      int getArea() {
         return (width * height);
      }
};

int main(void) {
   Rectangle Rect;
   int area;
 
   Rect.setWidth(5);
   Rect.setHeight(7);

   area = Rect.getArea();
   // Вивод площі
   cout << "Total area: " << Rect.getArea() << endl;
   // Виведення вартості
   cout << "Total paint cost: $" << Rect.getCost(area) << endl;
   return 0;
}

