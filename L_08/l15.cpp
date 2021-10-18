#include <iostream>

class Number {
   public:
      float getNumber(  );
      Number( float val );             // звичайний конструктор
      Number( const Number &obj);  // конструктор копії
      ~Number();                     // деструктор
   private:
      float *ptr;
};

// Визначення методів, зокрема конструкторів та деструктору
Number::Number(float val) {
   std::cout << "Normal constructor allocating ptr\n";
   // виділяємо пам'ять під вказівник
   ptr = new float;
   *ptr = val;
}

Number::Number(const Number &obj) {
   std::clog << "Copy constructor allocating ptr.\n";
   ptr = new float;
   *ptr = *obj.ptr; // копіювання
}

Number::~Number() { // деструктор звільняє память
   std::clog << "Freeing memory!\n";
   delete ptr;
}

float Number::getNumber(  ) {
   return *ptr;
}

void display(Number obj) {
   std::cout << "Value: " << obj.getNumber() <<"\n";
}
int main() {
   Number value(10.0f);
   display(value);
}
