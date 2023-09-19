#include <stdio.h>
#include <math.h>


int main(){
    double sum = sqrt(50);
    for (int i = 49, i < 0, i--)
        sum = sqrt(i + sum);
    printf("%f", sum);
    
    
    return 0;
}