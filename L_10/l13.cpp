#include <iostream>
#include <new>

int main(){

//memory bad_alloc processing
    int * arr;
    try {
        arr = new int[1000000000];
        std::cout<<"Memory allocated \n";
         delete[] arr;
    } catch(std::bad_alloc ex) {
        std::cout<<"bad allocation "<<ex.what();
    }
}
