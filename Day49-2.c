#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    char words[10][30];
    int wordCount = 0;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    char *token = strtok(name, " ");
    while (token != NULL && wordCount < 10) {
        strcpy(words[wordCount], token);
        wordCount++;
        token = strtok(NULL, " ");
    }

    printf("Result: ");
    for (int i = 0; i < wordCount - 1; i++) {
        printf("%c.", toupper(words[i][0]));
    }
    if (wordCount > 0) {
        printf("%s", words[wordCount - 1]);
    }

    printf("\n");
    return 0;
}