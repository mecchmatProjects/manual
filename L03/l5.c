#include <stdio.h>
int main () {   /* масив з 5 рядками та 2 колонками*/   
int a[5][2] = { {0,0}, {1,2}, {2,4}, {3,6},{4,8}};   

int i, j;
for(i = 0; i < 5; i = i + 1){
for(j = 0; j < 7; j =j++)
a2[i][j] = 10 * i + j;
}

for(i = 0; i < 5; i++ ){
   for(j = 0; j < 7; j++)
       printf("%d\t", a2[i][j]);
  printf("\n");
}

for(i = 0; i < 5; i++){
   for(j = 0; j < 7; j++)
       scanf("%d ", &a2[i][j]);
  
}

for(i = 0; i < 5; i = i + 1){
   for(j = 0; j < 7; j = j + 1)
     printf("\t%d", a2[i][j]);
   printf("\n");
}

}
