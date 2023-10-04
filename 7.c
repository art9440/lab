#include <stdio.h>
#include <ctype.h>


int min(int count, int minn){
    if (count < minn)
        return count;
    return minn;
}


int main(){
    int count = 0, minn = 1000000000;
    char str[120];
    gets(str);
    for (int i=0;str[i] != '\0'; i++){
        if (isalpha(str[i]))
            count++;
        else if (isspace(str[i]) && count != 0){
            minn = min(count, minn);
            count = 0;
        }
        if (str[i + 1] == '\0'){
            minn = min(count, minn);
            count = 0;
        }
    }
    printf("%d", minn);


    return 0;
}
