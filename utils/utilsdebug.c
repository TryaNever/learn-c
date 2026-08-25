#include <stdio.h>
#include "utilsdebug.h"

void print_array(int arr[], size_t count)
{
    printf("[\n");
    for (size_t i = 0; i < count; i++)
    {
        printf(" %d", arr[i]);
        if (i != count - 1)
        {
            if (i % 5 == 4 || i == count - 1)
                printf(",\n");
            else
                printf(", ");
        }
        else
            printf("\n");
    }
    printf("]\n");
}