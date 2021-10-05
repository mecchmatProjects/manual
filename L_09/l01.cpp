#include <iostream>
using namespace std;
// Базовий клас
class Shape {
   public: // публічні методи
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

// Клас-нащадок
class Rectangle: public Shape {
   public:
      int getArea() {
         return (width * height);
      }
};

int main() {
   Rectangle Rect;
   Rect.setWidth(5);
   Rect.setHeight(7);
   // Виведемо площу прямокутнику
   cout << "Total area: " << Rect.getArea() << endl;
}
