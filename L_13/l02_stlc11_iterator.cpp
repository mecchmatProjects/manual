#include<iostream>
//#include<iterator> // for iterators
#include<vector> // for vectors

int main(){ 
     std::vector<int> ar = { 1, 2, 3, 4, 5 }; 

     std::vector<int> v { 1, 2, 3, 4, 5 };
        for (std::vector<int>::reverse_iterator iter = v.rbegin(); iter != v.rend(); ++iter){
 		std::cout << *iter << " ";
               *iter = (*iter) * (*iter);
	}
     std::cout << "\n";

     for (std::vector<int>::const_reverse_iterator iter = v.crbegin(); iter != v.crend(); ++iter){
		std::cout << *iter << " ";
		// неможливо бо ітератор константний
		//*iter = (*iter) * (*iter);
	}

}
