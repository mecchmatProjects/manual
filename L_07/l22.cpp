#include <iostream>

int ** allocateTwoDimenArrayOnHeapUsingNew(int row, int col){
  int ** ptr = new int*[row];
  for(int i = 0; i < row; i++){ 
    ptr[i] = new int[col];
  }
  return ptr;
}

void destroyTwoDimenArrayOnHeapUsingDelete(int ** ptr, int row, int col){
  for(int i = 0; i < row; i++){
    delete [] ptr[i];
  }
  delete [] ptr;
}

void testbyHeap(){
  int row = 2;
  int col = 3;

  int ** ptr = allocateTwoDimenArrayOnHeapUsingNew(row, col);
  ptr[0][0] = 1;   ptr[0][1] = 2;   ptr[0][2] = 3;
  ptr[1][0] = 4;   ptr[1][1] = 5;   ptr[1][2] = 6;

  for(int i = 0; i < row; i++){
    for(int j = 0; j < col; j++){
      std::cout<<ptr[i][j]<<" , ";
   }
   std::cout<<std::endl;
  }
}

int *** allocateThreeDimenArrayOnHeapUsingNew(int row, int col, int z){
  int *** ptr = new int**[row];
  for(int i = 0; i < row; i++){
    ptr[i] = new int*[col];
    for(int j = 0; j < col; j++){
      ptr[i][j] = new int[z];
    }
  }
 ptr[0][0][0] = 1; ptr[0][0][1] = 2;
 ptr[0][1][0] = 3; ptr[0][1][1] = 4;
 ptr[0][2][0] = 5; ptr[0][2][1] = 6;
 ptr[1][0][0] = 11; ptr[1][0][1] = 12;
 ptr[1][1][0] = 13; ptr[1][1][1] = 14;
 ptr[1][2][0] = 15; ptr[1][2][1] = 16;
 return ptr;
}

int main(){

  testbyHeap();
  int *** ptr = allocateThreeDimenArrayOnHeapUsingNew(2,3,2);

  for(int i = 0; i < 2; i++){
    for(int j = 0; j < 3; j++){
      std::cout<<"(";
      for(int k = 0; k < 2; k++){
        std::cout<<ptr[i][j][k]<<",";
      }
      std::cout<<"),";
   }
  std::cout<<std::endl;
 }
 
}
