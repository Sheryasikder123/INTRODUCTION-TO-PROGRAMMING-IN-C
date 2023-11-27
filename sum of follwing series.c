#include<stdio.h>

int main() {
    float n, sum = 0;
    printf("Enter the number: ");
    scanf("%f", &n);

    for (int i = 1; i <= n; i++) {
        sum += (float)i / (n * n);
    }

    printf("The sum of the series is: %f", sum);

    return 0;
}