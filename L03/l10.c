#include <stdio.h>

int main(){
  int  var[] = {1, 20, 300};
  int  i, *ptr = var;
  printf("Address of var[%d] = %p\n", i, ptr );
  printf("Value of var[%d] = %d\n", i, *ptr );
  ptr+=2; /*  переходимо на дві позиції вперед */
  printf("Address of var[%d] = %p\n", i, ptr );
  printf("Value of var[%d] = %d\n", i, *ptr );
}
