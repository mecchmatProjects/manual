#include <iostream>

#define MAXSIZE 100
// власний шаблон-огортка над масивом
template<class Type>class MyMasiv{
  Type mas[MAXSIZE];
  int size;
  public:
// створимо власний ітератор для цього класу
     class iterator{
          Type *current;
          public: 
           // перевантажимо оператори
            iterator() { current = 0; }
            void operator++() {
                   current++; 
            }
            void operator+=(int temp) {
                   current += temp; 
            }
            void operator-=(int temp) { 
                   current -= temp; 
            }
            void operator=(Type& temp) {
                 current = &temp; 
            }
            bool operator!=(Type& temp) {
                 return current != &temp; 
            }
            bool operator==(Type& temp) {
                 return current == &temp; 
            }
           // будемо виводити всі числа поділивши їх на 2
            Type operator *() { 
                return *current / 2; 
            }
           Type* operator ->() { 
              return current; } 
           };
    // методи нашого масиву
      MyMasiv(){	
           size = 0;
       }

     void add(int temp){
          size++; 
         mas[size - 1] = temp;
     }
    void del(){ 
        size--; 
       mas[size + 1] = 0; 
    }
    void show(){
       std::cout << "Array:\n";
       for (int i = 0;i < size;i++)
 	       std::cout << mas[i] << ' ';
	std::cout << "\n";
     }
   // методи для отримання ітераторів
    Type& begin() { return mas[0]; }
    Type& end() { return mas[size]; }
};


int main(){  
 MyMasiv<int> a;
 for (int i = 0;i < 5;i++){
     a.add(i*2);
  }

 MyMasiv<int>::iterator it;
 for (it = a.begin();it!=a.end();++it){
    std::cout << *it << ' ';    
 }

}

