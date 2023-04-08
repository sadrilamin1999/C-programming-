// Print the smalest value of array
#include<stdio.h>
#include<conio.h>

void main(){
  int numbers [6]={2,5,3,9,4,6};
  int i, min= numbers[0];
  for(i=1; i<=5; i++)
    {
      if(numbers[i]<min)
      min = numbers[i];
    }
    printf("The minimum value is: %d", min);
  getch();
}

