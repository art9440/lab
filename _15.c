#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>


int main() {
    int n, *arr, num = 1, top = 0, lt, rt, bt;
    scanf_s("%d", &n);
    arr = (int *)malloc(n * n * sizeof(int));
    lt = 0, rt = n - 1, bt = n - 1;

    while (lt <= rt && top <= bt) {
        for (int i = lt; i <= rt; i++)
            arr[top * n + i] = num++;
        top++;

        for (int i = top; i <= bt; i++)
            arr[i * n + rt] = num++;
        rt--;

        if (top <= bt) {
            for (int i = rt; i >= lt; i--)
                arr[bt * n + i] = num++;
            bt--;
        }

        if (lt <= rt) {
            for (int i = bt; i >= top; i--)
                arr[i * n + lt] = num++;
            lt++;
        }
    }

    for (int i = 0; i < n * n; i++)
        printf("%d ", arr[i]);

    free(arr);
    return 0;
}
