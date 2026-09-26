#include <stdio.h>

int main() {
    int a, b;
    int sum, difference, product;
    float quotient;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    sum = a + b;
    difference = a - b;
    product = a * b;
    quotient = (float)a / b;

    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", difference);
    printf("Product = %d\n", product);
    printf("Quotient = %.2f\n", quotient);

    return 0;
}
