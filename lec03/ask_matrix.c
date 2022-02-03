#include <stdio.h>
<<<<<<< HEAD

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
=======
#include <stdlib.h>

int main() {
  int nrows = 50;
  int ncols = 100;
  printf("Please enter a number of rows: ");
  scanf(" %d", &nrows);
  printf("\n");

  printf("Please enter a number of cols: ");
  scanf(" %d", &ncols);
  printf("\n");

  int* m = malloc(sizeof(int) * nrows * ncols);

  int i, j;
  for (i = 0; i < nrows; i++) {  // for each row i
    for (j = 0; j < ncols; j++) { // iterate over each column in row i
        printf("\nEnter a value m[%d][%d]: ", i, j);
        int val = 0;
        scanf(" %d", &val);
        m[i*ncols + j] = val;
    }
  }
  printf("\n\nHere is your matrix!\n");

  for (i = 0; i < nrows; i++) {  // for each row i
    for (j = 0; j < ncols; j++) { // iterate over each column in row i
        printf("%d ", m[i*ncols + j]);
    }
    printf("\n");
  }

>>>>>>> refs/remotes/origin/main
  free(m);
  m = NULL;
  return 0;
}
<<<<<<< HEAD
=======

>>>>>>> refs/remotes/origin/main
