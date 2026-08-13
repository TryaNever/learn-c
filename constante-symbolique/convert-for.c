#include <stdio.h>
#include <stdlib.h>

#define MAX 300
#define MIN 0
#define RANGE 20
int main() {
    int fahr;

    for(fahr = MAX; fahr >= MIN; fahr -= RANGE) {
        printf("%d\t%.2f\n", fahr, (fahr - 32) * (5.0/9.0));
    }
    system("PAUSE");
}
