#include <stdio.h>
#include <malloc.h>

int fmaxx(int *arr, int len, int maxx, int i){

    if (arr[i] > maxx)
        maxx = arr[i];

    if (i == len - 1)
        return maxx;

    return fmaxx(arr, len, maxx, i + 1);
}

int main(){
    int len, *arr, maxx = 0, res;
    scanf("%d", &len);
    arr = (int*)malloc(len * sizeof(int));

    for (int i = 0; i < len; i++)
        scanf("%d", arr + i);

    res = fmaxx(arr, len, maxx, 0);
    printf("%d", res);


    free(arr);
    return 0;
}
