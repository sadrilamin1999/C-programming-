#include<stdio.h>

int main(){
  int nums[5];
  int i;
  for( i=0; i<5; i++)
    {
      scanf("%d", &nums[i]);
    }

  for(i=0; i<5; i++)
    {
      printf("%d ", nums[i]);
    }

  return 0;
}
