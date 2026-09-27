#include <stdio.h>
#include <string.h>

int main() {
    char name[100];

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    printf("Initials: ");

    int newWord = 1; 

    for (int i = 0; name[i] != '\0'; i++) {
        if (newWord && name[i] != ' ') {
            printf("%c.", toupper(name[i]));
            newWord = 0;
        }
        if (name[i] == ' ') {
            newWord = 1;
        }
    }

    printf("\n");
    return 0;
}