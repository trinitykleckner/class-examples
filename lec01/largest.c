#include <stdio.h>
#include <stdlib.h>

int largest(int arr[], int n) {
  int largest = arr[0];
  for (int i = 1; i < n; i++) {
    if (arr[i] > largest) {
      largest = arr[i];
    }
  }
  return largest;
}

int main() {
  int values[10];
  for (int i = 0; i < 10; i++) {
    values[i] = rand();
    printf("%d\n", values[i]);
  }

  printf("The largest is %d\n", largest(values, 10));
  
}

