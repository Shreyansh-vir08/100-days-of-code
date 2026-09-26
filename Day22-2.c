#include <stdio.h>

int main(void)
{
	int n;
	double sum = 0.0;

	printf("Enter the number of terms: ");
	scanf("%d", &n);

	if (n <= 0) {
		printf("Number of terms must be positive.\n");
		return 1;
	}

	for (int i = 1; i <= n; i++) {
		if (i == 1)
			sum += 1.0;
		else
			sum += (double)(2 * i - 1) / (2 * i);
	}

	printf("Sum of the series = %.2f\n", sum);
	return 0;
}