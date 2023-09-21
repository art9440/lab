#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <time.h>


void fillrnd(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = rand();

        for (int j = 0; j < i; j++)

            while (arr[i] == arr[j])
                arr[i] = rand();
    }
}

int main() {

    int n, *arr;
    scanf("%d", &n);
    srand(time(NULL));
    arr = (int*)malloc(n * sizeof(int));

    fillrnd(arr, n);

    for (int i = 0; i < n; i++)
        printf("%d\n", arr[i]);

    free(arr);
    return 0;
}
