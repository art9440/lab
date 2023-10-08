#include <stdio.h>
#include <string.h>
#include <malloc.h>


void sort(char **words, int countword){
    for (int i = 0; i < countword - 1; i++){
        for (int j = 0; j < countword - 1; j++){
            if (strlen(words[j]) > strlen(words[j + 1])){
                char *temp = words[j];
                words[j] = words[j + 1];
                words[j + 1] = temp;
            }
        }
    }


    for (int i = 0; i < countword; i ++)
        printf("%s ", words[i]);

}


int main(){
    char str[1000];
    gets(str);
    char** words = (char *)malloc(sizeof(char));
    char* word = strtok(str, " ");
    int countword = 0;
    while(word != NULL) {
        words[countword] = word;
        countword++;
        word = strtok(NULL, " ");
    }

    sort(words, countword);


    return 0;
}
