#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, d, x, y;

    printf("Enter a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = b * b - 4 * a * c;

    if (d > 0)
    {
        x = (-b + sqrt(d)) / (2 * a);
        y = (-b - sqrt(d)) / (2 * a);

        printf("Roots are real and different\n");
        printf("Root 1 = %.2f\n", x);
        printf("Root 2 = %.2f", y);
    }
    else if (d == 0)
    {
        x = -b / (2 * a);

        printf("Roots are real and equal\n");
        printf("Root = %.2f", x);
    }
    else
    {
        printf("Roots are imaginary");
    }

    return 0;
}