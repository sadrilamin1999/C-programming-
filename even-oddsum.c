// Write an array & make sum of all even or odd numbers
#include <stdio.h>
#include<conio.h>

void main() {
    int numbers[6] = {2, 5, 3, 9, 4, 6};
    int even_sum = 0;
    int odd_sum = 0;
    int i;

    for (i = 0; i <=5; i++) {
        if (numbers[i] % 2 == 0) {
            even_sum += numbers[i];
        } else {
            odd_sum += numbers[i];
        }
    }

    printf("Sum of even numbers: %d\n", even_sum);
    printf("Sum of odd numbers: %d\n", odd_sum);

    getch();
}
