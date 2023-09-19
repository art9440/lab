#include <stdio.h>


int main() {
    float t;
    scanf("%f", &t);
    t = t - (int)t / 10 * 10;
    
    if ((int)t % 5 >= 0 && (int)t % 5 <= 3)
        printf("Green");
    else
        printf("Red");
    
    return 0;
}
