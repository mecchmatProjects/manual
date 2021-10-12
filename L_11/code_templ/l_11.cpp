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

class Point3D: public Point2D<int>{
  int z;
   public:
  void setZ(int z_){ z=z_; }
  void print(){
    Point2D<int>::print();
    std::cout<<"z"<<z<<"\n";
  }
};

int main(){
  Point2D<int> p1;
  p1.setX(1);p1.setY(2);
  p1.print();

  Point2D<double> p2;
  p2.setX(1);p2.setY(2);
  p2.print();

  Point3D p3;
  p3.setX(11);p3.setY(22);p3.setZ(33);
  p3.print();

  //Point3D<double> p4;
}

/*
x,y1,2
x,y1,2
x,y11,22
z33
*/
