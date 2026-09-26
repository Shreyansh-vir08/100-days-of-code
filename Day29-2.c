#include <stdio.h>

int main(void)
{
	int n;

	printf("Enter the number of elements: ");
	scanf("%d", &n);

	if (n <= 0) {
		printf("Array must contain at least one element.\n");
		return 1;
	}

	int array[n];

	printf("Enter %d elements: ", n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &array[i]);
	}

	int minimum = array[0];
	int maximum = array[0];

	for (int i = 1; i < n; i++) {
		if (array[i] < minimum)
			minimum = array[i];
		if (array[i] > maximum)
			maximum = array[i];
	}

	printf("Minimum element: %d\n", minimum);
	printf("Maximum element: %d\n", maximum);

	return 0;
}