// C++ pointer memory
#include <iostream>
#include <new>

void init_single()
{
// Покажчик ініціалізується NULL
// Потім створюється пам'ять для змінної
    int *p1 = NULL;
    p1 = new int;
// або
    int *p2 = new int;
//
    int *other = p1;

    int *іp = new іnt;
    int і = 0;
    іp = &і;

// array memory allocation - виділення памяті під масив
    int *p3 = new int(25);
    float *p4 = new float(75.25);
    
    std::cout<<p1<<","<<p2<<","<<p3<<","<<p4<<endl;
    
    std::cout<<*p1<<","<<*p2<<","<<*p3<<","<<*p4<<endl;

    delete p1;
    delete p2;
    delete p3;
    delete p4;
}

void init_array()
{
    int *p5 = new int[10];
    int *p6 = new int[5] {1,2,3,4,};

    int m =10;
    int * p7 = new int [m];
    
    std::cout<<p5<<","<<p6<<endl;
    std::cout<<p5[1]<<","<<p6[1]<<endl;

    std::cout<<p7[0]<<","<<p7[1]<<endl;

    delete[] p5;
    delete[] p6;
    delete[] p7;
}



int main ()
{
    init_single();
    inits_array();

    int i,n;
    int * p;
    cout << "How many numbers would you like to type? ";
    cin >> i;
    p= new (nothrow) int[i];
    if (p == nullptr)
        cout << "Error: memory could not be allocated";
    else {
        for (n=0; n<i; n++) {
            cout << "Enter number: ";
            cin >> p[n];
        }
        cout << "You have entered: ";
        for (n=0; n<i; n++)
            cout << p[n] << ", ";
        delete[] p;
    }
    return 0;
}
/*

0x559c8763ee70,0x559c8763ee90,0x559c8763eeb0,0x559c8763eed0
0,0,25,75.25
0x559c8763f300,0x559c8763eed0
0,2
How many numbers would you like to type? 2
Enter number: 2
Enter number: 42344
You have entered: 2, 42344,
 * */
