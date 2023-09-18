#include <stdio.h>


int main(){
    int a, b, k = 10000;
    scanf("%d", &a);
    while (a > 0){
        b += (a % 10) * k;
        a = a / 10;
        k = k / 10;
    }
    printf("%d", b);

    return 0;
}