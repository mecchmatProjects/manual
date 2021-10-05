#include <iostream>
#include <cmath>

class Vektor {
   protected:
      double x,y;
};
 
class CenterMass:Vektor { // CenterMass клас-нащадок Vektor
   double mass;
   public:
      void setCenterMass(double x, double y, double m);
      double getShoulder();
};
 
// Методи класу -нащадку
double CenterMass::getShoulder() {
   return mass * sqrt(x * x + y * y);
}
void CenterMass::setCenterMass(double x_, double y_, double m_) {
   x = x_;
   y = y_;
   mass = m_;
}
int main() {
   CenterMass x;
   // встановлюємо 
   x.setCenterMass(3.0,4.0,1.0);
   std::cout << "Shoulder of Force : "<< x.getShoulder() << std::endl;
}

