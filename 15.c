#include <stdio.h>
#include <string.h>


int main(){
    char answer[100];
    gets(answer);
    for (int i = 0; i < 25; i++)
        puts("\n");
    for (int k = 0; k < 10; k++) {
        int sumbull = 0, sumcow = 0;
        char num[100];
        gets(num);
        for (int i = 0; i < 4; i++) {
            if (strcmp(num, answer) == 0) {
                printf("Win");
                return 0;
            }
            if (num[i] == answer[i])
                sumbull++;
            else
                for (int j = 0; j < 4; j++)
                    if (num[i] == answer[j])
                        sumcow++;
        }
        printf("Bulls: %d Cows: %d\n", sumbull, sumcow);
    }
    printf("Lose");
    return 0;
}
