#include <stdio.h>
#include <ctype.h>
#include <string.h>


//Опускаем все элементы строки в нижний регистр
void low(char *str){
    for (int i = 0; str[i] != '\0';i ++)
        *(str + i) = tolower(*(str + i));
}


int main(){
    int count;
    char str[80];
    gets(str);
    low(str);
    for (int i = 0;str[i] != '\0'; i++){
        if (strchr(str, str[i]) - str == i)
            count ++;
    }
    printf("%d", count);


    return 0;
}
