#include <stdio.h>
#include <math.h>


unsigned long long int factorial(unsigned long long int num) {
    if (num == 0)
        return 1;
    else
        return num * factorial(num - 1);
}


int main() {
    int n;
    double sum = 0, p = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        p = 1;

        for (int j = i; j <= 2 * n;j++)
            p *= (pow(-1, i) * (j + 1)) / (factorial(j - i + 1));

        sum += p;
    }
    printf("%f", sum);
    return 0;
}
