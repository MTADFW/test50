// Printing characters in an array of strings

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    printf("\n");
    //Skip ./ argument with argv[i + 1], don't iterate beyond i argument (since using i + 1) with i < argc - 1
    for (int i = 0; i < argc - 1; i++)
    {
        for (int j = 0, n = strlen(argv[i + 1]); j < n; j++)
        {
            printf("%c\n", argv[i + 1][j]);
        }
        printf("\n");
    }
}
