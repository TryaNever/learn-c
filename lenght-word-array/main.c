#include <stdio.h>
#include <stdlib.h>

int main() {
    int c;
    int number_letter, n_length[10];


    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            printf("y a un espace ici");
            n_length[0 - number_letter]++;
        } else {
            printf("%d", number_letter);
        }
        
        number_letter++;
    }
    system("PAUSE");
}