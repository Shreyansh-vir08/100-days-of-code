#include <stdio.h>

int main(void)
{
	int row, spaces, stars;

	for (row = 1; row <= 7; row += 2) {
		spaces = (7 - row) / 2;

		for (int i = 0; i < spaces; i++)
			printf(" ");
		for (int i = 0; i < row; i++)
			printf("*");
		printf("\n");
	}

	for (row = 5; row >= 1; row -= 2) {
		spaces = (7 - row) / 2;

		for (int i = 0; i < spaces; i++)
			printf(" ");
		for (int i = 0; i < row; i++)
			printf("*");
		printf("\n");
	}

	return 0;
}