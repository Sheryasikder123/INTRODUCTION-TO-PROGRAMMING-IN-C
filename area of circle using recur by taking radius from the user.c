#include<stdio.h>
float area(int r);
float area(int r){
    if(r<=0){
        return 0;
    }
    else{
        return 3.14*r*r;
    }
}
int main(){
    float a;
    printf("enter the radius:");
    scanf("%f",&a);
    printf("the area of circle is:%f",area(a));
    return 0;
}