#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

//declare shift for use throughout
int shift(char c);

int main(int argc, string argv[])
{
    //2 command line arguments or return to user
    if (argc != 2)
    {
        printf("Usage: ./vigenere keyword\n");
        return 1;
    }
    else
    {
        //Each character is tested to be a letter, non-letters are returned
        for (int i = 0, n = strlen(argv[1]); i < n; i++)
        {
            int c = (int) argv[1][i];
            while (c > 122 || c < 65)
            {
                printf("Usage: ./vigenere keyword\n");
                return 1;
            }          
        }
    }
    
    string plaintext = get_string("plaintext:  ");
    printf("ciphertext: ");

    int j;
    for (int i = 0, k = 0, n = strlen(plaintext), l = strlen(argv[1]); i < n; i++)

        if (plaintext[i] > 122 || plaintext[i] < 65)
        {
            printf("%c", plaintext[i]);
        }
        else
        {
            if (islower(plaintext[i]))
            {
                j = ((plaintext[i] + shift(argv[1][k]) - 19) % 26) + 'a';
                printf("%c", j);
                k++;
                k = k % l;
            }
            else if (isupper(plaintext[i]))
            {
                j = ((plaintext[i] + shift(argv[1][k]) - 13) % 26) + 'A';
                printf("%c", j);
                k++;
                k = k % l;
            }
        }
    printf("\n");
    return 0;
}
int shift(char c)
{
    int j;
    if (islower(c))
    {
        j = c - 97;
    }
    if (isupper(c))
    {
        j = c - 65;
    }
    return j;
}
