#include <stdio.h>
#include <math.h>


int main(){
    int k, count;
    scanf("%d", &k);
    count = (k / 3) % 10;
    printf("%d", count);

    return 0;
}
