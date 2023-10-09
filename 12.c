#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <ctype.h>


int ispython(char *str){
    char key[][14]={"False", "await","else","import",	
                    "pass","None","break","except",	
                    "in","raise", "True",	"class","finally",	
                    "is",	"return" ,"and", "continue", "for",	
                    "lambda","try","as","def", "from", "nonlocal",	
                    "while","assert","del","global","not",	
                    "with","async","elif",	"if",	"or",	"yield"};
    for (int i = 0; i < 34; i++)
        if (strcmp(str, key[i]) == 0)
                    return 0;
    
    
    int flag = 1;
    
    for (int i = 0; i < strlen(str); i++) {
        if ((int) str[0] >= (int) '0' && (int) str[0] <= (int) '9')
            return 0;
        if (((int)str[i]>=(int)'0' && (int)str[i]<=(int)'9')
        ||((int)str[i]>=(int)'A' && (int)str[i]<=(int)'Z')||((int)str[i]>=(int)'a'
        && (int)str[i]<=(int)'z')||(str[i]=='_'))
            flag = 1;
        else
            return 0;
    }
    if (flag == 1)
        return 1;
}


int main(){
    char str[1000];
    gets(str);
    int res = ispython(str);
    if (res == 0)
        printf("No");
    else
        printf("Yes");

    return 0;
}
