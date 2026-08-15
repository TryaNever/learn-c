#include <stdio.h>
#include <stdlib.h>

int main() {
    int c,i;
    int number_letter = 0;
    int n_length[10] = {0};

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            n_length[number_letter - 1]++;
            printf("new word\n");
            number_letter = 0;
        }
        else {
            printf("new letter\n");
            number_letter++;
        }
    }
    for(i = 0; i <= sizeof(n_length);i++) {
        printf("%d\n", n_length[i]);
    }
    system("PAUSE");
}