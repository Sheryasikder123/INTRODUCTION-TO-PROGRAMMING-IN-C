//do while loop
#include<stdio.h>
int main(){
int n,i=1;
char a;
printf("enter the character:");
 scanf("%c",&a);
    printf("enter the no of times to print the character:");
    scanf("%d",&n);
 do{
     printf("%c\n",a);
     i++;
 }
 while(i<=n);
  return 0;
}