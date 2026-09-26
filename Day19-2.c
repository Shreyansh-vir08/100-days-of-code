#include <stdio.h>

int main(void)
{
	long long number;
	int sum = 0;

	printf("Enter a number: ");
	scanf("%lld", &number);

	if (number < 0)
		number = -number;

	do {
		sum += (int)(number % 10);
		number /= 10;
	} while (number != 0);

	printf("Sum of digits = %d\n", sum);
	return 0;
}
