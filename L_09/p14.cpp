//перерахування: перелік відповідних типів
  enum AnimalType {
       Herbivore,
       Carnivore,
       Omnivore,
  };
 
  class Animal {
        public:
               AnimalType Type;
               bool bIsAlive;
               int iNumberOfChildren;
  };
 
  class Mammal : public Animal{
        public:
               int iNumberOfTeats;
  };
 
  class Person : public Mammal{
        public:
              bool bLikesFish;  // скоріше за все true
  };
 
  int main() {
      Animal* pA1 = new Animal;
      Animal* pA2 = new Mammal;
      Animal* pA3 = new Cat;
      Mammal* pM  = new Cat;
      
      pA2->bIsAlive = true;     // Correct
      pA2->Type = Herbivore;    // Correct
      pM->iNumberOfTeats = 2;   // Correct
 
      pA2->iNumberOfTeats = 6;  // Incorrect
      pA3->bLikesFish = true;   // Incorrect
      
      Person* pC = (Person*)pA3;      // Downcast, коректно (але не дуже гарно)
      pC->bLikesFish = false;   // Коректно (хоча й дивно)
   }

