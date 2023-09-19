#include <stdio.h>
#include <math.h>


int main(){
    float n, save1, save2, save3, save4, total;
    scanf("%f", &n);
    save1 = n * n;
    printf("%f", save1);
    save2 = save1 * save1;
    save3 = save2 * save2;
    save4 = save3 * save3;
    total = save4 * save2 * save3;
    printf("\n%f", total);
    
    return 0;
}
