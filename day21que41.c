//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/

#include <stdio.h>
int main() {
    int n, first, last, middle, digits = 1, result;
    printf("enter a number: ");
    scanf("%d", &n);

    last = n % 10;

    while (n >= 10) {
        n = n / 10;
        digits = digits * 10;
    }

    first = n;

    middle = (n % digits) * 10 + last;

    result = last * digits + middle;

    printf("%d", result);
}