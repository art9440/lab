#include <stdio.h>
#include <string.h>
#include <malloc.h>


void game(char **arr, int n){
    int step = 1,flag = 1;
    for(int i = 1; i < n; i++){
        if((arr[i-1][strlen(arr[i-1]) - 1] == arr[i][0]) && (flag == 1))
            step++;
        else
            flag = 0;
        }
    if (step%2==0)
        printf("Winner is Vasia\n");
    else
        printf("Winner is Petia\n");
}


int main(){
    char str[1000];
    gets(str);
    char **words = (char **) (char *) malloc(sizeof(char));
    char *word = strtok(str, " ");
    int countword = 0;
    while (word != NULL) {
        words[countword] = word;
        countword++;
        word = strtok(NULL, " ");
    }
    int step = 1;
    game(words,countword);


    return 0;
}
