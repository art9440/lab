#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
int nod(int a, int b){
    while (a != 0 && b != 0){
        if (a > b)
            a = a % b;
        else
            b = b % a;
    }
    return a + b;
}

int nodall(int * arr, int n){
    int res = arr[0];

    for(int i = 0; i < n; i++)
        res = nod(res, arr[i]);

    return res;
}


int main() {
    int n;
    scanf("%d", &n);

    int *arr = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++){
        int x;
        scanf("%d", &x);
        arr[i] = x;
    }
    printf("%d", nodall(arr, n));

    return 0;
}
