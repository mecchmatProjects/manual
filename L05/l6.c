#include<stdio.h> 
#include<stdlib.h>
 
typedef struct Point { 
  int x, y; 
}Point; 

int main() { 
	Point p1 = {1, 2};  // визначили змінну типу Point
	Point *p2 = &p1;  // p2  -  це вказівник на структуру p1 
	// Доступ до полів структури використовуючи вказівник 
	printf("p1(%d,%d)\n", p2->x, p2->y); 

	Point * p_array; //  визначили безрозмірний масив типу Point
	unsigned n;
	printf("n=");
	scanf("%u", &n); // ввели кількість елементів масиву p_array
	p_array = (Point*) malloc(n*sizeof(Point)); // виділили память

	// ввели масив точок
	for(int i=0;i<n;i++){
		printf("\ninput x, y:");
		scanf("%d %d ", &p_array[i].x, &p_array[i].y);  	
	}
	int i=0;
	printf("\n---------\n");
	Point * ptr = p_array;
	while (i<n){ // вивели масив точок ітеруючись по вказівнику
	 printf("\np[%d]=(%d %d)",i, ptr->x, ptr->y); 
	 ptr++; i++;
	}
	free(p_array); // не забули звільнити память
}
