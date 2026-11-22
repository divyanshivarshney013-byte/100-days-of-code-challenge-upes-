//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include <stdio.h>

int main()
{
    int rows, cols;
    int a[10][10];

    scanf("%d %d", &rows, &cols);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int k = 0; k < rows + cols - 1; k++)
    {
        if (k % 2 == 0)
        {
            for (int i = k; i >= 0; i--)
            {
                int j = k - i;

                if (i < rows && j < cols)
                    printf("%d ", a[i][j]);
            }
        }
        else
        {
            for (int j = k; j >= 0; j--)
            {
                int i = k - j;

                if (i < rows && j < cols)
                    printf("%d ", a[i][j]);
            }
        }
    }

    return 0;
}