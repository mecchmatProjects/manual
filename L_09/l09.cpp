#include <iostream>

 class Shape {
   protected:
      int width, height;
   public:
      Shape( int a = 0, int b = 0){
         width = a;
         height = b;
      }
      int area() {
         std::cout << "Parent class area :" <<"\n";
         return 0;
      }
};
class Rectangle: public Shape {
   public:
      Rectangle( int a = 0, int b = 0):Shape(a, b) { }
      
      int area () {
         std::cout << "Rectangle class area :" << width * height;
         return (width * height);
      }
};

class Triangle: public Shape {
   public:
      Triangle( int a = 0, int b = 0):Shape(a, b) { }
      
      int area () {
         std::cout << "Triangle class area :" <<width * height / 2;
         return (width * height / 2);
      }
};

int main() {
   Shape *shape;
   Rectangle rec(10,7);
   Triangle  tri(10,5);

   // беремо адресу Rectangle
   shape = &rec;
   // отримуємо його площу
   shape->area();

   // беремо адресу Triangle
   shape = &tri;
      // отримуємо його площу
   shape->area();
}

