#include <stdio.h>
#include <ctype.h>
#include <string.h>


void convert(char *str, int len){

    for(int i = len - 1; i >= 0; i--)
    {
        if(!isalnum(str[i]))
            str[i]=' ';
        if(str[i]==' ')
        {
            str[i]='\0';
            printf("%s ", &(str[i]) + 1);
        }
    }
    printf("%s",str);
}


int main(){
    char str[120];
    gets(str);
    int len = strlen(str);
    convert(str, len);


    return 0;
}
