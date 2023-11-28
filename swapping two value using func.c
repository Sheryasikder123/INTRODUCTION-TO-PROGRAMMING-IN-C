#include<stdio.h>
int swap(int x,int y){
    x=x*y;
    y=x/y;
    x=x/y;
    printf("the new value of a:%d\n",x);
    printf("the new value of b:%d\n",y);
}
int main(){
    int a,b,c;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);
    swap(a,b);
}