#include <stdio.h>
#include <math.h>


int main(){
    int a1, a2, a3, b1, b2, total1, total2, total3;
    scanf("%d %d %d", &a3, &a2, &a1);
    scanf("%d %d", &b2, &b1);
    total1 = (a1 + b1) % 10;
    total2 = (((a1 + b1) / 10) + a2 + b2) % 10;
    total3 = (((a1 + b1) / 10) + a2 + b2) / 10 + a3;
    printf("%d %d %d", total3, total2, total1);

    return 0;
}
