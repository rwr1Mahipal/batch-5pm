#include <stdio.h>
#include <string.h>

int main(){
    // char ch = 'a';
    char str[] = "Mern Developer";
    char str1[10] = {'a', 'b', 'c'};

    // printf("%c", ch);
    // printf("\n%s", str);
    // printf("\n%s ", str1);

    // printf("%d", strlen(str));
    // printf("%s", strupr(str));
    // printf("%s", strlwr(str));
    //    printf("%s", strcpy(str, "Java"));
        printf("%s", strcat(str, str1));

}