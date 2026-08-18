#include <stdlib.h>
#include <stdio.h>

#define MAXCRT 100000

int main() {
    int c,i;
    int lign[] = 0;

    i = 0;

    while ((c = getchar()) != EOF) {
        if (c == "{" || c == "}" || c == "\"")
        {
            lign[i] = c;
            i++;
        }

    }

    return 0;
}