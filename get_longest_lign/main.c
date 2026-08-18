#include <stdio.h>
#include <stdlib.h>

void print_array(int array[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d", array[i]);
    }
}

int main()
{
    int c;
    int index_longest = 0;
    int current_lign = 0;
    int longest_lign[] = {};

    c = getchar();
    while ((c = getchar()) != EOF)
    {
        if ()
        {
            if (c == '\n') {
                longest_lign[current_lign] += '\n';
                longest_lign[current_lign] += '\0';
                current_lign++;
            }
            else {
                longest_lign[current_lign] += c;
            }
        }
    }

    print_array(longest_lign, sizeof(longest_lign) / sizeof(longest_lign[0]));
    system("PAUSE");
}
