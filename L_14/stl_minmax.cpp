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
		cout << vect[i] << " ";

	std::cout << "\nMaximum element of vector is: ";
	std::cout << *max_element(vect.begin(), vect.end())<<" or " << max({10, 20, 5, 23, 42, 15});
	std::cout << "\nMinimum element of vector is: ";
	std::cout << *min_element(vect.begin(), vect.end())<<" or " << min(10, 20, 5, 23, 42, 15);           

        std::cout <<"\nmin:"<< 
              *minmax_element(vect.begin(), vect.end()).first <<
              " max=" << minmax({10, 20, 5, 23 ,42 , 15}).second;  

}         
