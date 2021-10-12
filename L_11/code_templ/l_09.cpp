#include <iostream>

// шаблон класу - class template
template <class T> class mycontainer {
    T element;
  public:
    mycontainer (T arg) {
                  element=arg;
   }
    T increase () {
      return ++element;
 }
};

template <>// !!! Увага: спеціалізація шаблону (template specialization)
class mycontainer <char> {
    char element;
  public:
    mycontainer(char arg) {element=arg;}
    char uppercase () {
      if((element>='a')&&(element<='z'))
      element+='A'-'a';
      return element;
    }
};

int main () {
  mycontainer<int> myint (7);
  mycontainer<char> mychar ('j');
  std::cout << myint.increase() << "\n"; // 8
  std::cout << mychar.uppercase() << "\n"; // 'J'
}