// Сума елементів
#include <iostream>
#include <numeric>   // для алгоритмів

void accum1_massiv(){ 
  	const int N = 8;
	int a[N] = {4, 12, 3, 6, 10, 7, 8, 5}, sum = 0;
	sum = std::accumulate(a, a+N, sum);
	std::cout << "Sum of all elements:  " << sum << "\n";
	std::cout << "1000 + a[2] + a[3] + a[4]  = "  << std::accumulate(a+2, a+5, 1000) <<"\n";
}

void accum2_massiv(){
	const int N = 4;
	int a[N] = {2, 10, 5, 3}, prod =  1; 
	prod = std::accumulate(a, a+N, prod, std::multiplies<int>());
	std::cout << "Product of all elements: " << prod << "\n"; 
} 

class Fun {    
 public:
         Fun(){i = 1;}
           int  operator()(int x, int y)  {
		int u = x + i * y;   i *= 2;   
	  	return u; 
	}
      private:
           int  i;
}; 

int accum3_massiv()  {   
  	const int N = 4;
     	int a[N] = {7, 6, 9, 2},
     	prod = 0; 
     	prod =  std::accumulate(a, a+N, prod, Fun()); 
     	std::cout << prod << "\n";
     	return  0; 
     }

int main(){
  accum1_massiv();
  accum2_massiv();
  accum3_massiv();
}
