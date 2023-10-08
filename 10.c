#include <stdio.h>
#include <string.h>
#include <malloc.h>

int nolet(char *a, int len){
    for (int i = 0; i < len - 1; i ++)
        for (int j = i + 1; j < len; j++)
            if (a[i] == a[j])
                return 0;
    return 1;
}


int equal(char *a, char *b, int len){
    for (int i = 0;i < len - 1; i++){
        if (a[i] != b[i])
            return 0;
    }
    return 1;
}


void sort(char **words, int countword){
    for (int i = 1; i < countword; i++){
        if (strlen(words[i]) != strlen(words[0])) {
            if (nolet(words[i], strlen(words[i])) != 0)
                printf("%s\n", words[i]);
        }
        else {
                if ((equal(words[0], words[i], strlen(words[i])) == 0))
                    if (nolet(words[i], strlen(words[i])) != 0)
                        printf("%s\n", words[i]);
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
}
