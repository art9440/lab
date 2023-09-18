#include <stdio.h>


int main() {
    int a, b, c, d;
    scanf("%d %d", &a, &b);
    scanf("%d %d", &c, &d);

    if ((a / c) * (b / d) >= (a / d) * (b / c))
        printf("Long side to the long side.");
    else
        printf("Long side to the short side.");

    return 0;
}
