#include <iostream>

template<class T> class Point2D{
   T x;
   T y;
   public:
   T getX() {return x;}
   T getY() {return y;}
void setX(T);
void setY(T); 
void print(){
  std::cout<<"x,y"<<x<<","<<y<<"\n";
}
};

template<class T>
void Point2D<T>::setX(T x_){
   this->x = x_;
}

template<class T>
void Point2D<T>::setY(T y_){
   this->y = y_;
}


class Point3D // не є наслідником Point2D 
{
  // Незалежний інтерфейс
  public:
  void fun(){
   std::cout<<"I'm independent\n";
  }
};

template<typename T> class SpecificPoint3D:
  public Point3D,
  public Point2D<T>
{
  // Залежний інтерфейс
  T z;
  void print(){
    Point2D<T>::print();
    std::cout<<"z"<<z<<"\n";
  }
};

void foo(Point3D&){ //Функція що працює з загальним типом   Point3D
    std::cout<<"function foo\n";
}

int main(){
  SpecificPoint3D <int> int_pt;
  int_pt.fun();
  foo(int_pt);

  SpecificPoint3D <char> char_pt;
  foo(char_pt);
}
