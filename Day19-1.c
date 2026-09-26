
#include <stdio.h>

int main(void)
{
	int a, b, x, y, remainder;
	long long lcm;

	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);

	x = a < 0 ? -a : a;
	y = b < 0 ? -b : b;
	int first = x;
	int second = y;

	while (y != 0) {
		remainder = x % y;
		x = y;
		y = remainder;
	}

	lcm = (first == 0 || second == 0) ? 0 : (long long)first / x * second;
	printf("LCM = %lld\n", lcm);

	return 0;
}
