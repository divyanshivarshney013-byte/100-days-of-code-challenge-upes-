//Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

/*
Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

*/

#include <stdio.h>
#include <string.h>

enum TrafficLight
{
    RED,
    YELLOW,
    GREEN
};

int main()
{
    char light[20];
    enum TrafficLight signal;

    scanf("%s", light);

    if (strcmp(light, "RED") == 0)
        signal = RED;
    else if (strcmp(light, "YELLOW") == 0)
        signal = YELLOW;
    else
        signal = GREEN;

    if (signal == RED)
        printf("Stop");
    else if (signal == YELLOW)
        printf("Wait");
    else if (signal == GREEN)
        printf("Go");

    return 0;
}