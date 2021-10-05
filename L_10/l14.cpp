#include <iostream>
#include <vector>
#include <exception>

int main(){

// 3 out of range processing 
    //int x[9];
    std::vector<int> x(9);
    try {
        for(int i =0; i<=10; ++i) {
            //x[i] 
            x.at(i)=i; //
        }
        std::cout<<"Все гаразд"<<std::endl;
    } catch(std::out_of_range exception) {
        std::cout<<"Out of range";   
        std::cout<<exception.what();
    } catch(...) {
        std::cout<<"невідома проблема";
    }
}
