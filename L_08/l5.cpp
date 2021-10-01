#include <iostream>

class TimeH{
    /* private :  Ключове слово private можна не використовувати – це специфікатор по замовченню */
    //захищені члени
    unsigned hours;
    unsigned minutes;
    //цей метод доступний лише з цього класу
    unsigned getTotalMinutes() {
        return hours*60 + minutes;
    }
    

public: // публічні члени та методи
    // Конструктор
    /*TimeH(unsigned h=0, unsigned m=0) {
        setTime(h,m);
    }*/

    void setTime(unsigned h=0, unsigned m=0){
      hours = 0;
      minutes = 0;
      if(h<24 && m<60){
         hours = h;
         minutes = m;  
      }
    }

    //метод для виведення часу - загальнодостпуний
    void show() {
        std::cout<<"Time is:"<<hours<<":"<<minutes<<"\n";
    }
    

}; // декларація класу завершується крапкою з комою


int main(){

  TimeH time;
  time.setTime();
  time.show(); 

  TimeH time1;
  time1.setTime(12,20);
  time1.show(); 

}
