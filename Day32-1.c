#include <stdio.h>

int main() {
    int n1, n2, i, j;

    printf("Enter the size of first array: ");
    scanf("%d", &n1);

    printf("Enter the size of second array: ");
    scanf("%d", &n2);

    int a[n1], b[n2], merged[n1 + n2];

    printf("Enter %d elements of first array:\n", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter %d elements of second array:\n", n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    for (i = 0; i < n1; i++) {
        merged[i] = a[i];
    }

    for (j = 0; j < n2; j++) {
        merged[n1 + j] = b[j];
    }

    printf("Merged array: ");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}