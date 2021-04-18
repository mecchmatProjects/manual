#include<stdio.h> 
struct Point3D { 
 int x, y, z; 
}; 
int main() 
{ 
 // приклад designated initialization 
struct Point3D p1 = {.y = 0, .z = 1, .x = 2}; 
struct Point3D p2 = {.x = 20}; 

printf ("x = %d, y = %d, z = %d\n", p1.x, p1.y, p1.z); 
printf ("x = %d", p2.x); 
return 0; 
} 
