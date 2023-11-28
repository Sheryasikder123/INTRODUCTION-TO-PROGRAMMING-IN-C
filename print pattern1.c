#include<stdio.h>
int main(){
    int r;
    printf("enter the range:");
    scanf("%d",&r);
    for(int i=r; i>=1; i--){
        for(int j=i; j>=1; j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}