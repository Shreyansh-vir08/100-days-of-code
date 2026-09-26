#include <stdio.h>

int main(void)
{
	long long number;
	long long product = 1;
	int digit;
	int has_odd_digit = 0;

	printf("Enter a number: ");
	scanf("%lld", &number);

	if (number < 0)
		number = -number;

	if (number == 0) {
		printf("No odd digits found.\n");
		return 0;
	}

	while (number > 0) {
		digit = number % 10;
		if (digit % 2 != 0) {
			product *= digit;
			has_odd_digit = 1;
		}
		number /= 10;
	}

	if (has_odd_digit)
		printf("Product of odd digits: %lld\n", product);
	else
		printf("No odd digits found.\n");

	return 0;
}