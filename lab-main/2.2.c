#include <stdio.h>


int main() {
    int xleft1, yleft1, xright1, yright1, xleft2, yleft2, xright2, yright2;
    scanf("%d %d", &xleft1, &yleft1);
    scanf("%d %d", &xright1, &yright1);
    scanf("%d %d", &xleft2, &yleft2);
    scanf("%d %d", &xright2, &yright2);
    
    if (xleft1 <= xleft2)
        printf("%d ", xleft1);
    else
        printf("%d ", xleft2);

    if (yleft1 <= yleft2)
        printf("%d ", yleft1);
    else
       printf("%d ", yleft2);

    if (xright1 >= xright2)
        printf("%d ", xright1);
    else
        printf("%d ", xright2);

    if (yright1 >= yright2)
         printf("%d ", yright1);
    else
         printf("%d ", yright2);

    return 0;
}
