#include <iostream>

class Adder {
   public:
      // Конструктор
      Adder(int i = 0) {
         total = i;
      }
      // метод - інтерфейс
      void addNum(int number) {
         total += number;
      }
      // метод - інтерфейс
      int getTotal() {
         return total;
      };
      
   private:
      // дані, що приховані від користувача
      int total;
};

int main() {
   Adder a;
   a.addNum(10);
   a.addNum(20);
   a.addNum(30);

   std::cout << "Total " << a.getTotal() << std::endl;
}
