#include<stdio.h>

int main() {
    int range;
    printf("Enter the range: ");
    scanf("%d", &range);
    for(int i=1; i<=range; i++){
        if(i%2==1){
            printf("%d\n",i);
        }
    }
    return 0;
}