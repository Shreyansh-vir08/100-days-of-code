#include <stdio.h>

int main()
{
    char str[200];
    char word[100], longest[100];
    int i = 0, j = 0, length = 0, max = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0')
    {
        if (str[i] != ' ' && str[i] != '\n')
        {
            word[j] = str[i];
            j++;
            length++;
        }
        else
        {
            word[j] = '\0';

            if (length > max)
            {
                max = length;

                for (j = 0; word[j] != '\0'; j++)
                {
                    longest[j] = word[j];
                }

                longest[j] = '\0';
            }

            j = 0;
            length = 0;
        }

        i++;
    }

    printf("Longest word = %s", longest);

    return 0;
}