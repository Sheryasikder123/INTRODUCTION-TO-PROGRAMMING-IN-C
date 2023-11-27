//for loop
#include<stdio.h>
int main(){
int n;
char a;
printf("enter the character:");
 scanf("%c",&a);
    printf("enter the no of times to print the character:");
    scanf("%d",&n);
 for(int i=1; i<=n; i++){
     printf("%c\n",a);
 }
  return 0;
}
