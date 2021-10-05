
#include <iostream>

class StoreAngles{
   public:
   int angles;
   StoreAngles(){angles=0;}  
};


class DrawableObject {
  public:
    virtual void draw(StoreAngles& ) const = 0; //рахує кути
 };

 class Triangle : public DrawableObject {
 public:
   void draw(StoreAngles&) const; //малює трикутник
 };

 class Rectangle : public DrawableObject {
 public:
   void draw(StoreAngles&) const; //малює прямокутник
 };

 class Circle : public DrawableObject {
 public:
   void draw(StoreAngles&) const; //малює коло
 };


void Triangle::draw(StoreAngles& x) const{
    x.angles+=3;	
} 

void Rectangle::draw(StoreAngles& x) const{
    x.angles+=4;	
} 

void Circle::draw(StoreAngles& x) const{
    x.angles+=0;	
} 

int main(){

 DrawableObject* drawableList[3];
 
 StoreAngles drawingBoard;

 drawableList[0] = new Triangle();
 drawableList[1] = new Rectangle();
 drawableList[2] = new Circle();

 for(int i=0;i<3;++i) {
   DrawableObject *object = drawableList[i];
   object->draw(drawingBoard);
 }

 std::cout<<"total number of angles:"<<drawingBoard.angles;

}
