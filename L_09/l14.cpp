#include<iostream>

/*class Foo{
    // ...
    public:
        // Virtual default constructor: віртуальний конструктор за замовченням
        virtual Foo* create() const;

        // Virtual copy constructor: віртуальний конструктор копії за замовченням
        virtual Foo* clone() const;
};*/

class Foo{
     
   // Віртуальні методи...
    public:
        virtual Foo* create() const = 0;
        virtual Foo* clone() const = 0;

        void print(){
          std::cout<<"print Foo\n";
        }
};



class Bar : public Foo // Bar нащадок Foo
{
    // ...

    public:
    // Non-virtual default constructor: : невіртуальний конструктор за замовченням
    Bar ();
    //Non-virtual copy constructor: невіртуальний конструктор копії за замовченням
    Bar (const Bar&);

    // Virtual default constructor, inline implementation
    Bar* create() const { return new Foo (); }
    // Virtual copy constructor, inline implementation
    Bar* clone() const { return new Foo (*this); }

    void print(){
          std::cout<<"print Bar\n";
        }
};

class Car : public Foo  // Bar нащадок Foo
{
    // ...

    public:
    // Non-virtual default constructor: : невіртуальний конструктор за замовченням
    Car ();
    //Non-virtual copy constructor: невіртуальний конструктор копії за замовченням
    Car (const Car&);

    // Virtual default constructor, inline implementation
    Car* create() const { return new Foo (); }
    // Virtual copy constructor, inline implementation
    Car* clone() const { return new Foo (*this); }

    void print(){
          std::cout<<"print Car\n";
        }
};

int main(){

  Far* x[4];
  Bar b;
  Car c;
  x[0] = b.create();
  x[1] = c.create();
  for(int i=2;i<4;++i){
     x[i] = x[i%2].clone();
  }
  
}

/*
Віртуальні конструктори
Існує ієрархія класів з базовим класом Foo. Для створення масиву об'єктів, що входить до різних класів з цієї ієрархії, бажано виконати наступне:
1. Створіть об'єкт baz того ж класу, що і бар (скажімо, Bar Bar), ініціалізований за допомогою конструктора за замовчуванням класу. Зазвичай використовується синтаксис:
 Bar * baz = bar.create ();
2. Створіть об'єкт baz того ж класу, що і бар, який є копією панелі. Зазвичай використовується синтаксис:
Bar * baz = bar.clone ();
У класі Foo, методи Foo :: create () і Foo :: clone () оголошуються наступним чином:
class Foo{
    // ...
    public:
        // Virtual default constructor: віртуальний конструктор за замовченням
        virtual Foo* create() const;

        // Virtual copy constructor: віртуальний конструктор копії за замовченням
        virtual Foo* clone() const;
};
Якщо потрібно використати Foo як абстрактний клас, методи потрібно зробити чисто віртуальними (pure virtual):
class Foo{
   // Віртуальні методи...
    public:
        virtual Foo* create() const = 0;
        virtual Foo* clone() const = 0;
};

Для того щоб забезпечити створення ініціалізованого за замовченням об’єкту та створення копій об’єкту кожен клас Bar в ієрархії повинен мати публічний конструктор за замовченням (public default) та конструктор копіювання (copy constructor). Віртуальні конструктори  Bar визначені наступним чином:
class Bar : ... // Bar нащадок Foo
{
    // ...

    public:
    // Non-virtual default constructor: : невіртуальний конструктор за замовченням
    Bar ();
    //Non-virtual copy constructor: невіртуальний конструктор копії за замовченням
    Bar (const Bar&);

    // Virtual default constructor, inline implementation
    Bar* create() const { return new Foo (); }
    // Virtual copy constructor, inline implementation
    Bar* clone() const { return new Foo (*this); }
};
Наведений вище код використовує коваріантні типи повернення. Якщо ваш компілятор не підтримує Bar * Bar :: create (), використовуйте замість Foo * Bar :: create () і аналогічно для clone ().
Під час використання цих віртуальних конструкторів необхідно вручну звільнити об'єкт, створений за допомогою виклику delete baz ;.
Цю неприємність можна уникнути в С++11, якщо так званий «розумний вказівник» (наприклад, std :: unique_ptr <Foo>) використовується у зворотному типі замість простого Foo *.



*/

