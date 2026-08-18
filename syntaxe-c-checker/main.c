#include <stdlib.h>
#include <stdio.h>

#define MAXCRT 200

void print_array(int array[], int size);

int main()
{
    int c, nb_crt_detected, size_array, i;
    int lign[MAXCRT] = {0};

    nb_crt_detected = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == '{' || c == '}' || c == '\"' || c == '\\' || c == '\'')
        {
            lign[nb_crt_detected] = c;
            nb_crt_detected++;
        }
    }

    int level_paren = 0;
    int in_string = 0;
    int in_char = 0;

    for (i = 0; i < nb_crt_detected; i++)
    {
        if (level_paren < 0)
        {
            printf("a error detected : miss open {}  %d %d", level_paren, in_string);
            print_array(lign, i);
            system("PAUSE");
            return 0;
        }

        if (lign[i] == '{' && in_string == 0 && in_char == 0 || lign[i] == '}' && in_string == 0 && in_char == 0)
        {
            if (lign[i] == '{')
            {
                level_paren++;
            }
            else if (lign[i] == '}')
            {
                level_paren--;
            }
        }
        if (lign[i] == '\"' && lign[i-1] != '\\')
        {
            in_string = !in_string;
        }
        if (lign[i] == '\'' && lign[i-1] != '\\')
        {
            in_char = !in_char;
        }
    }
    if (level_paren != 0)
    {
        printf("error detected : miss close {}");
    }
    if (in_string == 1)
    {
        printf("your miss close \"");
    }
    if (in_char == 1)
    {
        printf("your miss close \'");
    }
    
    printf("a error detected : miss open {}  %d %d", level_paren, in_string);
    print_array(lign, i);
    system("PAUSE");
    return 0;
}

void print_array(int array[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%c", array[i]);
    }
}