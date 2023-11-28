#include<stdio.h>
void rev(int n);
void rev(int n){
    if(n>0){
        printf("%d",n);
        rev(n-1);
    }
}
int main(){
    int a;
    printf("enter the value:");
    scanf("%d",&a);
    printf("in reverse order:");
    rev(a);
    return 0;
}