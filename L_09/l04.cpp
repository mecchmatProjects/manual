#include <iostream>
class PrintData {
   public:
      void print(int i) {
        std::cout << "Printing int: " << i << std::endl;
      }
      void print(float f) {
        std::cout << "Printing float: " << f << std::endl;
      }
      void print(double df) {
        std::cout << "Printing double: " << df << std::endl;
      }
      void print(const char* c) {
        std::cout << "Printing characters: " << c << std::endl;
      }
};

int main(void) {
   PrintData pd;
   // Виклик методу print для цілого
   pd.print(5);
   // Виклик методу print для float
   pd.print(25.35f);
   // Виклик методу print для double
   pd.print(234.567);
// Виклик методу print для символів
   pd.print("Hello C++");
}
