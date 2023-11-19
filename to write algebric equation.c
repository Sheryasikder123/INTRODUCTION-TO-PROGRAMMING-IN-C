#include <stdio.h>
int main(){
     float a,b,c;
     printf("enter value of a,b,c.:");
     scanf("%f%f%f",&a,&b,&c);
     printf("1st is:%f\n",(a+b)*(a+b));
    printf("2nd is:%f\n",(a-b)*(a-b));
    printf("3rd is:%f\n",(a+b)*(a-b));
    printf("4th is:%f\n",(a+b+c)*(a+b+c));
    printf("5th is:%f\n",(a+b-c)*(a+b-c));
    printf("6th is:%f\n",(a-b+c)*(a-b+c));
    printf("7th is:%f\n",(a-b-c)*(a-b-c));
    printf("8th is:%f\n",(a+b)*(a+b)*(a+b));
    printf("9th is:%f\n",(a-b)*(a-b)*(a-b));
    printf("10th is:%f\n",(a*a*a)+(b*b*b));
    printf("11th is:%f\n",(a*a*a)-(b*b*b));
    printf("12th is:%f\n",(a*a*a)+(b*b*b)+(c*c*c)-(3*a*b*c));
    printf("13th is:%f\n",(-a+b+c)*(-a+b+c));
}