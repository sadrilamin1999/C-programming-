// Find the odd numbers of array
#include<stdio.h>
#include<conio.h>

void main(){
  int numbers[6] = {2, 5, 3, 9, 4, 6};
    int i;

    printf("Odd numbers in the array: ");
    for (i = 0; i <= 5; i++) {
        if (numbers[i] % 2 != 0) {
            printf("%d ", numbers[i]);
        }
    }


  getch();
}
