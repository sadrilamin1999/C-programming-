#include <stdio.h>

int main() {

  int values[8];

  printf("Enter 5 integers: ");

  for(int i = 0; i < 8; ++i) {
     scanf("%d", &values[i]);
  }

  printf("Displaying integers: ");

  for(int i = 0; i < 8; ++i) {
     printf("%d\n", values[i]);
  }
  return 0;
}
