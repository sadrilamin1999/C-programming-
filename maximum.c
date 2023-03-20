// print the the biggest value of array
#include<stdio.h>
#include<conio.h>

void main(){
  int numbers [6]={2,5,3,9,4,6};
  int max = numbers[0], i;
  for(i=1; i<=5; i++)
  {
    if(numbers[i]>max)
      max= numbers[i];

  }
  printf("The maximum value is: %d", max);


  getch();
}

