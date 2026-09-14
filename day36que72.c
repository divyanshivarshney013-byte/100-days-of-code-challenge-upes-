//Q72: Find the sum of all elements in a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/

#include <stdio.h>
int main() {
    int matrix[100][100];
    int rows, cols;
    int i, j, sum = 0;

    // Read rows and columns
    scanf("%d %d", &rows, &cols);

    // Read elements and calculate sum
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum = sum + matrix[i][j];
        }
    }

    printf("%d", sum);

    return 0;
}