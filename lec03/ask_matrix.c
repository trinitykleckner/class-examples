#include <stdio.h>

int main(){

  int rows;
  int cols;

  prinf("How many rows?");
  scanf("%d", rows);
  printf("How many columns?");
  scanf("%d", cols);

  int* mat = matrix(sizeOf(int)* rows * cols);

  for(int i=0; i<rows; i++){
    for(int j=0; j<cols; j++){
      printf("Please enter a value for matrix[%d][%d]: ",i,j);
      int tempVal;
      scanf("%d",tempVal);
      m[i*cols+j] = tempVal
      
    }
  }
  free(m);
  m = NULL;
  return 0;
}
