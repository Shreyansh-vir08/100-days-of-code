#include <stdio.h>

int main() {
    int seconds, hours, minutes, sec;

    printf("Enter time in seconds: ");
    scanf("%d", &seconds);

    hours = seconds / 3600;
    seconds = seconds % 3600;

    minutes = seconds / 60;
    sec = seconds % 60;

    printf("Time = %d:%d:%d", hours, minutes, sec);

    return 0;
}
