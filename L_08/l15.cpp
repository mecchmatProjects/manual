#include <iostream>
using namespace std;

class Line {
   public:
      int getLength( void );
      Line( int len );             // звичайний конструктор
      Line( const Line &obj);  // конструктор копії
      ~Line();                     // деструктор
   private:
      int *ptr;
};

// Визначення методів, зокрема конструкторів та деструктору
Line::Line(int len) {
   cout << "Normal constructor allocating ptr" << endl;
   // виділяємо пам'ять під вказівник
   ptr = new int;
   *ptr = len;
}

Line::Line(const Line &obj) {
   cout << "Copy constructor allocating ptr." << endl;
   ptr = new int;
   *ptr = *obj.ptr; // копіювання
}

Line::~Line(void) { // деструктор звільняє память
   cout << "Freeing memory!" << endl;
   delete ptr;
}

int Line::getLength( void ) {
   return *ptr;
}

void display(Line obj) {
   cout << "Length of line : " << obj.getLength() <<endl;
}
int main() {
   Line line(10);
   display(line);
   return 0;
}
