
#include <iostream>
 
class Animal {
        public:
        std::string name;
        
};
 
class Pet : public Animal{
        public:
         float avgPrice;  
};

class Cat : public Pet{
        public:
         int color;
};
 
int main() {
      Animal* pAnimal1 = new Animal;
      Animal* pAnimal2 = new Pet;
      Animal* pAnimal3 = new Cat;
      Pet* pPet  = new Cat;
      
      pAnimal2->name = "Dog";     // Correct
      pPet->avgPrice = 200.0f;   // Correct
 
      //pAnimal2->avgPrice = 6;  // Incorrect
      //pAnimal3->color = 1;   // Incorrect
      
      Cat* pCat = (Cat*)pAnimal3;      // Downcast, коректно (але не дуже гарно)
      //Cat* pCat = (Cat*)pAnimal2; //тут можуть бути проблеми
      pCat->color = 1;   // Коректно
}
