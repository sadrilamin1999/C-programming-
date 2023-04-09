// find the maximum number and address from one dimension array
#include <stdio.h>

int main() {
  int arr[] = {5, 3, 8, 1, 9, 2};
  int n = sizeof(arr) / sizeof(arr[0]);
  int max = arr[0];
  int maxIndex = 0;

  for (int i = 1; i < n; i++) {
    if (arr[i] > max) {
      max = arr[i];
      maxIndex = i;
    }
  }

  printf("Maximum number: %d\n", max);
  printf("Address (index): %d\n", maxIndex);

  return 0;
}
