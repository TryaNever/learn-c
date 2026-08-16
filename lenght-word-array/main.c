#include <stdio.h>
#include <stdlib.h>


// void print_array(int array[], int size) {
//     int i;
//     for (i = 0; i < size; i++)
//     {
//         printf("%d", array[i]);
//     }
    
// }

int higher_num_array(int array[], int size) {
    int max,i;
    max = array[0];
    for (i = 1; i < size; i++) {
        if (max < array[i])
        {
            max = array[i];
        }
    }
    return max;
}

int main()
{
    int c, row, col;
    int number_letter = 0, max_count = 0;
    int histogram[10] = {0};
    int size_histogram;
    size_histogram = sizeof(histogram) / sizeof(histogram[0]);
    c = getchar();
    while (c != EOF)
    {

        if (c == ' ' || c == '\t' || c == '\n')
        {
            if (number_letter <= size_histogram && number_letter > 0)
            {
                histogram[number_letter - 1]++;
            }
            number_letter = 0;
            if (c == '\n') {
                break;
            }
        }
        else {
            number_letter++;
        }
        c = getchar();
    }
    max_count = higher_num_array(histogram,size_histogram);
    
    for (row = 0; row < size_histogram; row++) {
        for (col = 0; col < max_count; col++)
        {
            if (histogram[row] > col)
            {
                printf("#");
            } else {
                printf("_");
            }
        }
        printf("\n");  
    }
    system("PAUSE");
}