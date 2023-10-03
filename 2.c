#include <stdio.h>
#include <string.h>


int maxnum(int count, int maxx){
    if (count > maxx)
        return count;
    return maxx;
}


int main(){
    int len, count = 0, maxx = 0;
    char str[80];
    gets(str);
    len = strlen(str);
    for (int i = 0; i < len; i++){
        if (str[i] == str[i + 1])
            count += 1;
        else{
            maxx = maxnum(count + 1, maxx);
            count = 0;
        }
    }
    printf("%d", maxx);


    return 0;
}
