#include <iostream>     // std::cout

// визначення функції для заміни змінних
void swap(int& x, int& y) {
   int temp;
   temp = x; /* зберігаємо значення змінної x */
   x = y;    /* покласти y в x */
   y = temp; /* покласти значення x в y */
}

void swap_bad(int x, int y){ //OK, але функцыя нічго не зробить
   int temp;
   temp = x; /* зберігаємо значення змінної x */
   x = y;    /* покласти y в x */
   y = temp; /* покласти значення x в y */
}

int main(){
  int x=5,y=25;
  swap_bad(x,y);
  std::cout<<x<<","<<y<<"\n";
  swap(x,y);
  std::cout<<x<<","<<y<<"\n";

}
