#include <stdio.h>
#include <ctype.h>
int main(){
    char a;
    printf("enter the keyword type:");
    scanf("%c",&a);
    if(isalpha(a))
        printf("alphabet");
        else if (isdigit(a))
            printf("digit");
            else
                printf("special symbol");
            return 0;
}