#include <stdio.h>
int main () {

int number=100;
int* var_int = (int*) &number; 
char *var_char = (char*) &number;
short *var_short = (short*) &number;
float *var_float = (float*) &number;
double *var_double = (double*) &number;
long* var_long = (long*) &number;


var_char++; // значення зміститься на 1 байт
var_short++; // значення зміститься на 2 байти
var_float++; // значення зміститься на 4 байти
var_double++;// значення зміститься на 8 байт
var_long++; // значення зміститься на 8 байт

printf("%p %p %p %p %p %p",var_int,
                       var_char, 
                      var_short, 
                      var_float, 
                      var_long,
                      var_double);

}
/*
0x7ffd19eebc24 
0x7ffd19eebc25 
0x7ffd19eebc26 
0x7ffd19eebc28 
0x7ffd19eebc2c 
0x7ffd19eebc2c
*/
