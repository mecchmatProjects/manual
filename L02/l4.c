#include <sdio.h>

int main(){

  int x,y;
    scanf("%d %d",&x, &y);
    
    float z = (float)x/y; //1) перетворення чисельнику
    printf("z=%f",z);
    z = (x+0.0)/y; //2) перетворення значення виразу
    printf("z=%f",z);
    z = x/(float)y; //3) перетворення знаменнику
    printf("z=%f",z);
}
