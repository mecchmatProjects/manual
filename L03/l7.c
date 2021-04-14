#include <stdio.h>
int main () {
  int  var = 20;   /* ініціалізація цілої змінної var */
  int  *ip;        /* декларація вказівника на ціле число*/
   ip = &var;  /* зберігаємо у вказівнику адресу var */
  //printf("Address of var variable: %x\n", &var  можна виводити як ціле %x але буде попередження компілятора:  (not int*) 
  printf("Address of var variable: %p\n", &var  ); //специфікатор адреси %p 
  printf("Address stored in ip variable: %p\n", ip ); // виводимо значення вказівника 
  printf("Value of *ip variable: %d\n", *ip ); /* виводимо значення цілої змінної за адресом вказівника */
}
