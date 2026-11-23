//Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

/*
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/

#include <stdio.h>
#include <string.h>

enum Status
{
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main()
{
    char input[20];
    enum Status status;

    scanf("%s", input);

    if (strcmp(input, "SUCCESS") == 0)
        status = SUCCESS;
    else if (strcmp(input, "FAILURE") == 0)
        status = FAILURE;
    else
        status = TIMEOUT;

    if (status == SUCCESS)
        printf("Operation successful");
    else if (status == FAILURE)
        printf("Operation failed");
    else if (status == TIMEOUT)
        printf("Operation timed out");

    return 0;
}