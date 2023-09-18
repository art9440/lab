#include <stdio.h>
#include <math.h>


int main() {
    int floors, flats, num_of_flat;
    float num_ent, num_floor, flats_ent;
    scanf("%d %d\n", &floors, &flats);
    scanf("%d", &num_of_flat);
    flats_ent = flats * floors;
    num_ent = ceil(num_of_flat / flats_ent);
    printf("Number of entrance is %d.\n", (int)num_ent);
    num_floor = ceil((num_of_flat - flats_ent*(num_ent - 1)) / flats);
    printf("Number of floor is %d.", (int)num_floor);

    return 0;
}
