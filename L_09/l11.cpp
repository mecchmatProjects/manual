#include <iostream>

class Vehicle {
 public:
     Vehicle() {}
     Vehicle(double v): speed(v) {}
     double TopSpeed() const {
        return speed;
     }

     virtual void print(std::ostream& ) const = 0;
 protected:
     int speed;
 };

class WheeledVehicle : public Vehicle {
 public:
     WheeledVehicle(){}
     WheeledVehicle(double v, unsigned wheels)
     : Vehicle(v), numberOfWheels(wheels) {}
     unsigned getNumberOfWheels() const {
       return numberOfWheels;
     }

     void  print( std::ostream& ) const{ // цей метод implicitly virtual
       std::cout<< "Print Wheels" << numberOfWheels<<"\n";
    }
 protected:
     unsigned numberOfWheels;
};

class Car: public WheeledVehicle{
 public:
    Car(){} 
    Car(double v, int vol)
    : WheeledVehicle(v,4), volume(vol)
    {}
    int engineVolume() const {
       return volume;
    }
    void  print( std::ostream& ) const{ // цей метод implicitly virtual
       std::cout<< "Print Car, Wheels" << numberOfWheels<<" vol:"<<volume<<"\n";
    }
  private:
    int volume;
  };

class Plane: public Vehicle {
  public:
     Plane(){}
     Plane(double v, double h)
     : Vehicle(v), maxHigh(h) {} 
     double getMaxHigh() const {
       return maxHigh;
     }

     void  print( std::ostream& ) const{ // цей метод implicitly virtual
            std::cout<< "Print Plane ,maxHigh=" << maxHigh<<"\n";
     }
 private:
     double maxHigh;
};

int main(){
   Vehicle *mas[4] ;
   mas[0] = new WheeledVehicle(15.0,2);
   mas[1] = new Car(155.0,45);
   mas[2] = new Plane(855.0,15.0);
   mas[3] = new Car(125.0,55);

   for(int i=0;i<4;++i) {
     mas[i]->print(std::cout);
     delete mas[i];
  }
}

