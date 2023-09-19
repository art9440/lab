#include <stdio.h>
#include <math.h>


int main() {
    float x, a = 0, b = 1;

    while (b-a > 0.00001) {
        x = (b + a) / 2;

        if (signbit(pow(a,4) + 2 * pow(a,3) - a - 1) != signbit(pow(x, 4) + 2 * pow(x, 3) - x - 1))
            b = x;
        else
            a = x;
    }
    
    printf("%f", x);
    return 0;
}