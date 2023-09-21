#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>


int max(int num1, int num2){
    if (num1 > num2)
        return num1;
    return num2;
}


int maxnech(int *arr, int len){
    int maxx = 0, count = 0;
    
    for (int i = 0; i < len; i++){
        if (arr[i] % 2 == 0) {
            maxx = max(count, maxx);
            count = 0;
        }
        else
            count++;
    }
    
    return max(count, maxx);
}


int main() {
    int len, *arr, res;
    scanf("%d", &len);
    arr = (int*)malloc(len * sizeof(int));

    for (int i = 0; i < len; i++)
        scanf("%d", &arr[i]);

    res = maxnech(arr, len);
    printf("%d", res);

    free(arr);
    return 0;
}
