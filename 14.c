#include <stdio.h>
#include <string.h>


int main(){
    puts("Write a hint:\n");
    char hint[100], answer[100], hide[100];
    gets(hint);
    puts("Write an answer:\n");
    gets(answer);
    for (int i = 0; i < 25; i++)
        puts("\n");
    printf("%s\n", hint);
    for(int i = 0; i < strlen(answer); i ++) {
        hide[i] = '*';
        hide[i + 1] = '\0';
    }
    printf("%s", hide);
    int n;
    char res[100];
    puts("\nLetter or word (0 - letter, 1 - word)?");
    for (int k = 0; k < 20; k++){
        scanf("%d\n", &n);
        if (n == 1){
            gets(res);
            if (strcmp(answer, res) == 0) {
                printf("Win");
                return 0;
            }
            else{
                printf("Lose");
                return 0;
            }

        }

        else if (n == 0) {
            gets(res);
            for (int i = 0; i < strlen(answer); i++)
                if (answer[i] == res[0])
                    hide[i] = answer[i];
            printf("%s\n", hide);
        }
        }
    
    return 0;
}
