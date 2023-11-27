//do while loop
#include<stdio.h>
int main(){
int n,i;
printf("enter the number:");
 scanf("%d",&n);
 do{
     printf("%d*%d=%d\n",n,i,n*i);
     i++;
 }
 while(i<=10);
  return 0;
}