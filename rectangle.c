#include <stdio.h>

int main() {
    int rows, columns, i, j;

    printf("Enter the number of rows for the rectangle: ");
    scanf("%d", &rows);

    printf("Enter the number of columns for the rectangle: ");
    scanf("%d", &columns);

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= columns; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
