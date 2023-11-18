#include <stdio.h>

int main() {
    int a,b,c;
    printf("enter two number:");
    scanf ("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("num after swapping:%d\n",a);
    printf("num after swapping:%d\n",b);
    return 0;
}