#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <math.h>


float lenofside(int x1, int y1, int x2, int y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

float geronarea(float* start, float* end) {
    float area = 0.0;
    for (int i = 0; i < (end - start)/2 - 2; i++) {
        float a = lenofside(*start, *(start + 1), *(start + 2 + (i * 2)), *(start + 3 + (i * 2)));
        float b = lenofside(*(start + 2 + (i * 2)), *(start + 3 + (i * 2)), *(start + 4 + (i * 2)), *(start + 5 + (i * 2)));
        float c = lenofside(*start, *(start + 1), *(start + 4 + (i * 2)), *(start + 5 + (i * 2)));
        float p =  (a+b+c)/2;
        area += sqrt(p * (p - a) * (p - b) * (p - c));
    }
    return area;
}
int main() {
    int numsides;
    scanf("%d", &numsides);
    float *cord;
    cord = (float*)malloc((numsides * 2) * sizeof(float));

    for (int i = 0; i < numsides * 2; i++)
        scanf("%f", cord + i);
    printf("\n%f", geronarea(cord, cord + numsides * 2));

    free(cord);
    return 0;
}
