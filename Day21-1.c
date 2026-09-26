 #include <stdio.h>

int main(void)
{
	long long number, first, last, divisor = 1, middle, result;
	int negative = 0;

	printf("Enter a number: ");
	scanf("%lld", &number);

	if (number < 0) {
		negative = 1;
		number = -number;
	}

	if (number < 10) {
		result = number;
	} else {
		last = number % 10;
		while (number / divisor >= 10)
			divisor *= 10;

		first = number / divisor;
		middle = (number % divisor) / 10;
		result = last * divisor + middle * 10 + first;
	}

	if (negative)
		result = -result;

	printf("Number after swapping first and last digit: %lld\n", result);
	return 0;
}