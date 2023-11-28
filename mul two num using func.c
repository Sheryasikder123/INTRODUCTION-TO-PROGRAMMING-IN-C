#include<stdio.h>
int mul(int x,int y){
    int sum=x*y;
    return sum;
}
int main(){
    int a,b,c;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);
    c=mul(a,b);
    printf("the sum of %d nad %d is %d\n",a,b,c);
}