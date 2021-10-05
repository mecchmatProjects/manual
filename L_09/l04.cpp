#include <iostream>
using namespace std;
class PrintData {
   public:
      void print(int i) {
        cout << "Printing int: " << i << endl;
      }
      void print(float f) {
        cout << "Printing float: " << f << endl;
      }
      void print(double df) {
        cout << "Printing double: " << df << endl;
      }
      void print(const char* c) {
        cout << "Printing character: " << c << endl;
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
   return 0;
}
