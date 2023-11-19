#include <stdio.h>
int main(){
    int n,a=0,b=1,c;
    printf("enter the value:");
    scanf("%d",&n);
    printf("fibbonacii series:");
    for(int i=0;i<n;i++){
        printf("%d",a);
        c = a + b;
        a = b;
        b = c;
    }
}