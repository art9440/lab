#include <stdio.h>
#include <math.h>


int main(){
    float num1, num2;
    scanf("%f %f", &num1, &num2);
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    printf("%f %f", num1, num2);

    return 0;
}
