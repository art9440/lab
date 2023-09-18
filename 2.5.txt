#include <stdio.h>
#include <math.h>


int main() {
    int n, k, m;
    scanf("%d %d %d", &n, &k, &m);
    m = abs(m - k) - 1;
    k = 0;
    
    if (m > (n / 2))
        m = n - m - 1;
    printf(" %d", m);
    
    return 0;
}