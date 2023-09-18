#include <stdio.h>
#include <math.h>


int main(){
    double sum = 0;

    for(int i = 0; i < 10; i++)
        sum += M_PI / 10 * sin(M_PI / 10 * i + M_PI / 20);
    printf("%f", sum);
    
    return 0;
}