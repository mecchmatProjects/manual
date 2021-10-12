#include <cstdio>
#include <iostream>

int main(int argc, char **argv){

	int a1 =static_cast<int>(4.578f);
	float b1= static_cast<float>(a1*3);
	std::cout<<a1<<","<<b1<<std::endl;


	void * ptr = new long long (12LL);
	int *ptr2 = static_cast<int*> (ptr);
	std::cout<<*ptr2<<std::endl;

	long long * ptr3 = new long long (44LL);
	//int *ptr4 = static_cast<int*> (ptr3); // error: invalid static_cast from type ‘long long int*’ to type ‘int*’
	//cout<<*ptr4<<endl;

	int * ptr5 = new int (33);
	//long long *ptr6 = static_cast<long long*> (ptr5);
	//cout<<*ptr6<<endl;

	void *ptr6 = static_cast<void*> (ptr5);

	long long *ptr7 = static_cast<long long*> (ptr6);
	std::cout<<*ptr7<<std::endl;
}

