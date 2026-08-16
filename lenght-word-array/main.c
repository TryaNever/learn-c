#include <stdio.h>
#include <stdlib.h>

int main() {
    int c,i;
    int number_letter = 0;
    int n_length[10] = {0};
    c = getchar();
    while (c != EOF) {
        if (c == '\n')
            break;
        if (c == ' ' || c == '\t') {
            n_length[number_letter - 1]++;
            number_letter = 0;
        } else 
            number_letter++;
        c = getchar();
    }
    for(i = 0; i < sizeof(n_length) / sizeof(n_length[0]);i++) {
        printf("%d\n", n_length[i]);
    }
    
    system("PAUSE");
}