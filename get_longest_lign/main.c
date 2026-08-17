#include <stdio.h>
#include <stdlib.h>


void print_array(int array[], int size) {
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d", array[i]);
    }
    
}

int main() {
    int c;
    int index_longest = 0;
    int current_lign = 0;
    char all_lign[] = {""};

    c = getchar();
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            all_lign[current_lign] += '\n';
            all_lign[current_lign] += '\0';
            current_lign++;
        } else
        {
            all_lign[current_lign] += c;
        }
    }
    
    print_array(all_lign,sizeof(all_lign) / sizeof(all_lign[0]));
    system("PAUSE");
}
