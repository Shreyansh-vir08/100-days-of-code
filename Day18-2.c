#include <stdio.h>

int main(void)
{
	int a, b;

	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);

	while (b != 0) {
		int remainder = a % b;
		a = b;
		b = remainder;
	}

	if (a < 0)
		a = -a;

	printf("HCF (GCD) = %d\n", a);
	return 0;
}
