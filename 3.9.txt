#include <stdio.h>
#include <math.h>
#define e 2.7182818284590451


int main(){
    double p0 = 1.29, Z = 1.25 * pow(10,-4), P = 1.29, h;

    for (h = 0; P >= 1; h += 0.0001)
        P = p0 * pow(e, -h * Z);

    printf("%f", (h));
    return 0;
}