
#include <stdio.h>

int main(void)
{
	int number;

	printf("Enter a number: ");
	scanf("%d", &number);

	if (number < 0) {
		number = -number;
	}

	if (number == 0) {
		printf("0 has infinitely many factors.\n");
		return 0;
	}

	printf("Factors: ");
	for (int i = 1; i <= number; i++) {
		if (number % i == 0) {
			printf("%d ", i);
		}
	}
	printf("\n");

	return 0;
}
