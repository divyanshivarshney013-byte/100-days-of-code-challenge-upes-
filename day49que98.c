//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>

int main()
{
    char name[100];
    int i = 0, last = 0;

    fgets(name, sizeof(name), stdin);

    while (name[i] != '\0' && name[i] != '\n')
    {
        if (name[i] == ' ')
        {
            last = i + 1;
        }
        i++;
    }

    printf("%c.", name[0]);

    for (i = 1; i < last; i++)
    {
        if (name[i - 1] == ' ' && i != last)
        {
            printf("%c.", name[i]);
        }
    }

    printf(" %s", &name[last]);

    return 0;
}
