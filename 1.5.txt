#include <stdio.h>
#include <math.h>


int main() {
    float y, hour, minute;
    scanf("%f", &y);
    hour = y * 180 / M_PI / 30;
    printf("Hour hand %d\n", (int)hour);
    int new_hour = (int)hour;
    minute = (hour - new_hour) * 60;
    printf("Minute hand %d\n", (int)minute);
    printf("Degree %d", (int)(6*minute));

    return 0;
}
