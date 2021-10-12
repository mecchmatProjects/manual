#include <iostream>
#include "l_10_Array.h"
 
int main(){
	Array<int> intArray(10);
	Array<double> doubleArray(10);
 
	for (int count = 0; count < intArray.getLength(); ++count)
	{
		intArray[count] = count;
		doubleArray[count] = count + 0.5;
	}
 
	for (int count = intArray.getLength()-1; count >= 0; --count)
		std::cout << intArray[count] << "\t" << doubleArray[count] << '\n';
 
}
/*
9	9.5
8	8.5
7	7.5
6	6.5
5	5.5
4	4.5
3	3.5
2	2.5
1	1.5
0	0.5

*/
