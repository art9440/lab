#include <stdio.h>
#include <string.h>


int match(char* str1, char* str2, char* str3, char ch) {
        if (strstr(str2, &ch) == NULL && strstr(str3, &ch) == NULL) {
            return 1;
        }
        else if (strstr(str1, &ch) == NULL && strstr(str3, &ch) == NULL) {
            return 1;
        }
        else if (strstr(str1, &ch) == NULL && strstr(str2, &ch) == NULL) {
            return 1;
        }

    return 0;
}

int main() {
    char str1[100], str2[100], str3[100];
    gets(str1);
    gets(str2);
    gets(str3);

    for (int i = 0; str1[i] != '\0'; i++) {
        if (match(str1, str2, str3, str1[i])) {
            printf("%c ", str1[i]);
        }
    }
    for (int i = 0; str2[i] != '\0'; i++) {
        if (match(str1, str2, str3, str2[i])) {
            printf("%c ", str2[i]);
        }
    }
    for (int i = 0; str3[i] != '\0'; i++) {
        if (match(str1, str2, str3, str3[i])) {
            printf("%c ", str3[i]);
        }
    }

    return 0;
}
