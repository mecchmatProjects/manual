
#include <iostream>

class Animal{
        //content of Animal
       virtual double getAge() {
           return  0;
      }
};


class Pet:public Animal{
public:
        Pet(const char* p_name, int p_age, double p_weight):
                name(p_name), age(p_age),weight(p_weight) {
        }

        std::string name;
        int age;
        double weight;
      
        void show() {
                std::cout << "Name: " << name << " age: " << age << " weight: " << weight<< "\n";
        }

        void addYear(double added_weight){
                age++;
                weight += added_weight;
        }

};

class Cat : public Pet{
public:
        Cat(const char* p_name, int c_age, double c_weight): 
                                               Pet(p_name, c_age, c_weight){
            voice = "myaw";
        }
        std::string voice;
        std::string getMurr()        {
                return voice;
        }
        double getAge() {
           return  age;
      }
};

class Kitty : public Pet{
public:
        Kitty(const char* c_name, int c_age, double c_weight, Cat* k_mother) : Pet(c_name, c_age, c_weight){
	    mother = k_mother; 	
        }
        Cat* mother;
        Cat* getMother()        {
                return mother;
        }
        double getAge() {
           return  0.5;
      }
};

void new_year(Pet* pet){
        std::cout << "Happy New Year!!!\n";
        pet->addYear(2.0);
        pet->show();
};

int main(){
    //Вказівник на базовий обєкт: pointer to base class object
    Pet* pussy;
    
    // Обєкти похідних класів: object of derived class
    Cat m1("Murka", 3, 4.5);
    Kitty c1("Malka",0, 1.5, &m1);
    
    // перетворення вгору: implicit upcasting
    pussy = &m1;
    
    //It's ok
    std::cout<<pussy->name<<"\n";
    std::cout<<pussy->age<<"\n";
    
    //Помилка(переторення вгору) Fails because upcasting is used
    //std::cout<<pussy->getAge();
    
    new_year(&c1);
    new_year(&m1);
    
    std::cout<<"Mother of "<<c1.name<<" is "<<c1.getMother()->name;

  //explicit downcasting from Pet to Cat
   Cat* m2 = (Cat*)(pussy);

   Pet p1("Tom", 7, 5.6);
   //try to cast an Pet to Cat
   Cat* m3 = (Cat*)(&p1);
   std::cout << m3->getAge() << "\n";

   Pet p2("Vas'ka", 4, 4.4);
   Cat* m4 = dynamic_cast<Cat*>(&p2);
   if (m4)
        std::cout << m4->getAge() << "\n";
   else
        std::cout << "Can't  cast from Pet to Cat\n";
}

/*
Murka
3
Happy New Year!!!
Name: Malka age: 1 weight: 3.5
Happy New Year!!!
Name: Murka age: 4 weight: 6.5
Mother of Malka is Murka0
Can't  cast from Pet to Cat


*/
