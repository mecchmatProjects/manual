#include <iostream>
#include <iomanip> // setprecision, setfill, setw
using namespace std;

int main() { 
double x = 45.12345; 
cout << "x = " << setprecision(4) << setfill('0') << setw(7) << x << endl; 
}
