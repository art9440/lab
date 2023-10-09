#include <stdio.h>
#include <string.h>


void resetstring(char* num) {
    int length = strlen(num);
    memset(num, '\0', length);
}


int delight(char* num) {

    int len = strlen(num);

    if (len % 2 == 0) {
        int sum1 = 0;
        int sum2 = 0;
        for (int i = 0; i < strlen(num) / 2; i++) {
            sum1 += (int) num[i];
            sum2 += (int) num[strlen(num) - i - 1];
        }
        if (sum1 == sum2)
            return 1;
    }
    return 0;
}


int main(){
    int count = 1;
    char num[100];
    gets(num);
    while (delight(num) != 1){
        if (delight(num) == 1)
            printf("%d", count);
        resetstring(num);
        gets(num);
        count++;
    }
    if (delight(num) == 1)
        printf("%d", count);

    return 0;

}
