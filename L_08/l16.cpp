#include <iostream>

class Number {
   public:
      float getNumber();
      Number(int val);             // конструктор
      Number(const Number &obj);  // конструктор копіювання
      ~Number();                     // деструктор

   private:
      float *ptr;
};

// Визначення методів, зокрема конструкторів та деструктору
Number::Number(int val) {
   std::clog << "Normal constructor allocating ptr\n";
   // виділяємо пам'ять під вказівник
   ptr = new float;
   *ptr = val;
}

Number::Number(const Number &obj) {
   std::clog << "Copy constructor allocating ptr.\n";
   ptr = new float;
   *ptr = *obj.ptr; // копіювання
}

Number::~Number() {
   std::clog << "Freeing memory!\n";
   delete ptr;
}

float Number::getNumber() {
   return *ptr;
}

void display(Number obj) {
   std::cout << "Number is : " << obj.getNumber() <<"\n";
}

int main() {
  Number n1(10); // Конструктор
  Number n2 = n1; // Це також конструктор- копіювання
  display(n1);
  display(n2);
}

