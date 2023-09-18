#include <stdio.h>
#include<math.h>


int main() {
    int k = 20, raz = 0;

    while (k > 0){
        if (k == 20){
            raz = k * k;
            k -= 1;
        }
        else{
            raz -= k * k;
            k -= 1;
        }
    }
    printf("%d", raz);

    return 0;
}
