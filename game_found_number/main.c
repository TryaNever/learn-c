#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 10
#define MIN 1

int main()
{
    srand(time(NULL));

    int number_gess = (rand() % (MAX - MIN + 1)) + MIN;
    int number_guessed;

    do
    {
        printf("Trouve le chiffre entre %d et %d\n", MIN, MAX);
        scanf("%d", &number_guessed);

        if (number_guessed > number_gess)
        {
            printf("le chiffre est plus petit\n");
        }
        else if (number_guessed < number_gess)
        {
            printf("le chiffre est plus grand\n");
        }
    } while (number_gess != number_guessed);

    printf("le chiffre est correct\n");
}
