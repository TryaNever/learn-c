#include <stdio.h>
#include <stdlib.h>

#define MAX 4

int main()
{
    char text[MAX] = {'F', 'B', 'R', 'T'};
    char key[MAX] = {'A', 'Z', 'E', 'R'};
    char encoded_test[MAX];
    char unencoded_test[MAX];

    for (size_t i = 0; i < MAX; i++)
    {
        encoded_test[i] = text[i] ^ key[i];
    }

    for (size_t i = 0; i < MAX; i++)
    {
        unencoded_test[i] = encoded_test[i] ^ key[i];
    }

    printf("encoded text : ");

    for (size_t i = 0; i < MAX; i++)
    {
        printf("%c", encoded_test[i]);
    }

    printf("\n unencoded text : ");

    for (size_t i = 0; i < MAX; i++)
    {
        printf("%c", unencoded_test[i]);
    }
}