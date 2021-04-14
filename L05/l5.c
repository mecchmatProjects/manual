
#include<stdio.h> 
struct Point { 
int x, y; 
}; 
#define N 5
int main() { 
     // Масив структур 
    struct Point arr[N]; 
     // Доступ до членів масиву 
    arr[0].x = 10; 
    arr[0].y = 20; 
    printf("%d %d", arr[0].x, arr[0].y); 
    return 0; 
}
