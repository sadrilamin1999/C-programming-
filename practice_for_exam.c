#include <stdio.h>

int main() {
   int numbers [6]={2,5,3,9,4,6};
  int max = numbers[0], i;
  for(i=1; i<6; i++)
  {
    if(numbers[i]>max)
      max= numbers[i];

  }
  printf("The maximum value is: %d", max);
  return 0;
}
