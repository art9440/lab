#include <stdio.h>

int simple(int n, int k){
    if (n % k == 0 && n != k)
        return 0;
    if (n == k)
        return 1;
    return simple(n, k + 1);
}

int main(){
    int n, k = 2;
    scanf("%d", &n);
    if (n == 1) {
        printf("Not Simple");
        return 0;
    }
    if (simple(n, k) == 1)
        printf("Is Simple");
    else
        printf("Not Simple");

    return 0;
}
