#include<stdio.h>

int main() {
    int n, temp = 0;
    printf("Enter the value to check if it is a prime number: ");
    scanf("%d", &n);

    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            temp++;
            break;
        }
    }

    if (temp == 0) {
        printf("The number is prime.\n");
    } else {
        printf("The number is not prime.\n");
    }

    return 0;
}