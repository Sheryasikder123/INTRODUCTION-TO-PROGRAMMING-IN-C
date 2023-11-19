#include <stdio.h>
int main(){
    int a,b,c,d;
    printf("enter value of a,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    d=(b*b)-4*a*c;
    printf("the value discriminate value of d is:%d",d);


   return 0;
}