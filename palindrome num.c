//pallindrome num
#include<stdio.h>
int main(){
    int n,backup,r,sum=0;
    printf("enter any number:");
    scanf("%d",&n);
    backup=n;
    while(n>0){
        r=n%10;
        sum=r+(sum*10);
        n=n/10;
    }
    if(backup==sum){
        printf("palindrome no.");
    }
    else{
        printf("not a palindrome no.");
    }
}