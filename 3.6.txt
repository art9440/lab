#include <stdio.h>


int main() {
    float s;

    for (int i = 201; i > 1; i-=2)
        s = 1 / (s + i);

    printf("%f", s);
    return 0;
}