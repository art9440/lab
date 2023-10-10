#include <stdio.h>

int Count(char let, char *str){
   int count = 0;
   for (int i = 0; str[i] != '\0';i ++) {
       if (str[i] == let)
           count++;
   }

   if (count == 3)
       return 1;

   return 0;
}


int main(){
    char str[256];
    gets(str);
    for (int i = 0;str[i] != '\0'; i ++)
        if (Count(str[i], str)) {
            printf("%c", str[i]);
            return 0;
        }


    return 0;
}
