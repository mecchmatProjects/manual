//
#include <stdio.h>
const float pi = 3.14158f;
int main(){
int num_students=30, price=520, some_number=-999;
float bottles=25, x=54.321;
printf ("%d students drank %f bottles.\n", num_students, bottles);
printf ("Value of pi is %f.\n", pi);
printf ("The price is %d%s\n", price,"у.е");
printf ("x=%-7.4f s=%5d%7.2f ", x, some_number, x);
}
/*
30 students drank 25.000000 bottles.
Value of pi is 3.141580.
The price is 520у.е
x=54.3210 s= -999  54.32
*/
