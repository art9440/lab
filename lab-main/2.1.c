#include <stdio.h>
#include <locale.h>


int main() {
    setlocale(LC_ALL, "Rus");
    int k;
    scanf("%d", &k);
    if(k == 1)
        printf("Мы нашли %d гриб в лесу.",k);
    else if(k > 1 && k < 5)
        printf("Мы нашли %d гриба в лесу.",k);
    else if (k >= 5 || k == 0)
        printf("Мы нашли %d грибов в лесу.",k);

    return 0;
}
