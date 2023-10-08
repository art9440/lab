#include <stdio.h>
#include <string.h>
#include <malloc.h>


int equal(char *a, char *b, int len){
    for (int i = 0;i < len - 1; i++){
        if (a[i] != b[i])
            return 0;
    }
    return 1;
}


void sort(char **words, int countword){
    for (int i = 0; i < countword - 1; i++){
        for (int j = i + 1; j < countword; j++){
            if (strlen(words[i]) == strlen(words[j]))
                if (equal(words[i], words[j], strlen(words[i])) != 0)
                    printf("%s", words[i]);

        }
    }

}


int main() {
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


    sort(words, countword);


    return 0;
