#include<stdio.h>
int add(int n);
int add(int n){
    if(n==1){
        return 1;
    }
    int sumN1=add(n-1);
    int sumN=sumN1+n;
    return sumN;
}
int main(){
    int a;
    printf("enter the value:");
    scanf("%d",&a);
    printf("sum is:%d",add(a));
    return 0;
}