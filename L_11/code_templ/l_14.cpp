#include <iostream>

class A {
int x;
public:

 template <class T> T & ConvertTo ();
 template <class T> void ConvertFrom (const T & data);
 template <class T>void f (T Container){
    int i1 = Container.template ConvertTo <int> () + 1;
    Container.ConvertFrom (i1); // кваліфікатор не потрібен
 }
};

template <class T> 
T& A::ConvertTo (){
    return static_cast<T>(0);
}

template <class T> void ConvertFrom (const T & data){
   data = static_cast<T>(0);
}

int main(){
   A a1;
   a1.f<int>(1);
   a1.f<double>(1.0);
}
