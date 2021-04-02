
#include<stdio.h> 
struct Point 
{ 
int x, y; 
}; 
int main() { 
      // Масив структур 
       struct Point arr[10]; 
        // Доступ до членів масиву 
arr[0].x = 10; 
arr[0].y = 20; 

printf("%d %d", arr[0].x, arr[0].y); 
return 0; 
}
