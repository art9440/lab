#include <stdio.h>
#include <string.h>

//функция для поиска максимального количества пробелов
int maxnum(int count, int maxx){
    if (count > maxx)
        return count;
    return maxx;
}


int main() {
    int len, count = 0, maxx = 0;
    char str[80];
    gets(str);
    len = strlen(str);
    for (int i = 0; i < len; i++){
        if (str[i] == ' '){
            count+=1;
        }
        else{
            maxx = maxnum(count, maxx);
            count = 0;
        }

    }
    printf("%d", maxx);


    return 0;
}
