#include <stdlib.h>
#include <stdio.h>

#define MAXCRT 100000

void print_array(int array[], int size);

int main()
{
    int c, i, size_array;
    int lign[MAXCRT] = {0};

    i = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == '{' || c == '}' || c == '\"')
        {
            lign[i] = c;
            i++;
        }
    }


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