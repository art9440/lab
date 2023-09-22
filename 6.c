#include <stdio.h>


int sumnum(int n, int sum){
    if (n == 0)
        return sum;
    
    sum += n % 10;
    return sumnum(n / 10, sum);
}


int main(){
    int n, res, sum = 0;
    scanf("%d", &n);
    res = sumnum(n, sum);
    printf("%d", res);

    return 0;
}
