#include <algorithm>
#include <iostream>
#include <vector>

int main() {

	int arr[] = {10, 20, 5, 23 ,42 , 15};
	int n = sizeof(arr)/sizeof(arr[0]);
	std::vector<int> vect(arr, arr+n);
	//  
	std::reverse(vect.begin(), vect.end());

    	std::cout << "Vector after reversing is: ";
	
 	for (int i=0; i<vect.size(); i++)
		std::cout << vect[i] << " ";

	std::cout << "\nMaximum element of vector is: ";
	std::cout << *std::max_element(vect.begin(), vect.end()); //<<" or " << std::max(vect.begin(),vect.end());
	std::cout << "\nMinimum element of vector is: ";
	std::cout << *std::min_element(vect.begin(), vect.end());// <<" or " << std::min(vect.begin(),vect.end());           

       /* std::cout <<"\nmin:"<< 
              *std::minmax_element(vect.begin(), vect.end()).first <<
              " max=" << std::minmax({10, 20, 5, 23 ,42 , 15}).second;  */

}         
