#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


void print_array(int array[], int size) {
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d", array[i]);
    }
    
}

int higher_num_array(int array[], int size) {
    int max,i;
    max = array[0];
    for (i = 0; i < size; i++) {
        if (max < array[i])
        {
            max = array[i];
        }
    }
    return max;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int c, i,row,col;
    int number_letter = 0, higter_num = 0;
    int n_length[10] = {0};
    int size_n_length;
    size_n_length = sizeof(n_length) / sizeof(n_length[0]);
    c = getchar();
    while (c != EOF)
    {
        if (c == '\n'){
            n_length[number_letter - 1]++;
            break;
        }
        else if (c == ' ' || c == '\t')
        {
            n_length[number_letter - 1]++;
            number_letter = 0;
        }
        else
            number_letter++;
        c = getchar();
    }
    higter_num = higher_num_array(n_length,size_n_length);
    
    for (row = 0; row < size_n_length; row++) {
        for (col = 0; col < higter_num; col++)
        {
            if (n_length[row] > col)
            {
                printf("▮");
            } else {
                printf("▯");
            }
        }
        printf("\n");  
    }
    system("PAUSE");
}