#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int number_gess = (rand() % (100 - 1 + 1)) + 1;
    int number_guessed;

    do
    {
        scanf("%d", &number_guessed);

        if (number_guessed > number_gess)
        {
            printf("le chiffre est plus petit\n");
        }
        else if (number_guessed < number_gess)
        {
            printf("le chiffre est plus grand\n");
        }
    } while (number_gess == number_guessed);

    printf("\nle chiffre est correct\n");
}
