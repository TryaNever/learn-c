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
        if (c == '{' || c == '}' || c == '\"')
        {
            lign[nb_crt_detected] = c;
            nb_crt_detected++;
        }
    }

    int out, in;
    int in_paren = 0;

    out = in = 0;
    for (i = 0; i < nb_crt_detected; i++)
    {
        if (lign[i] == '{' && in_paren == 0)
        {
            in++;
        }
        else if (lign[i] == '}' && in_paren == 0)
        {
            out++;
        }
        else if (lign[i] == '\"' && in_paren == 0)
        {
            in++;
            in_paren = 1;
        }
        else if (lign[i] == '\"' && in_paren == 1)
        {
            out++;
            in_paren = 0;
        }
        else
        {
            printf("error in \"\" you miss close i think ;)");
        }
    }
    if (in != out || in_paren == 1)
    {   
        printf("you miss close your {} ;)");
    }
    else
    {
        printf("nothing syntaxe error detected");
    }

    print_array(lign, nb_crt_detected);
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