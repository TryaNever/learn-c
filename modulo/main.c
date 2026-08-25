#include <stdio.h>
#include <stdlib.h>

#define MAX 1000
#define MIN 0

int main()
{
    while (1)
    {
        int number;
        printf("Quel est votre âge ? \n");
        scanf("%d", &number);
        if (number < MIN || number > MAX)
        {
            printf("y a un probleme\n");
            continue;
        }

        if (number % 2 == 0)
        {
            printf("ton nombre est paire\n");
        }
        else
        {
            printf("ton nombre est impaire\n");
        }
    }
    return 0;
}