#include <stdio.h>
#include <stdlib.h>

int main() {
    int fahr;

    for(fahr = 300; fahr >= 0; fahr = fahr - 20) {
        printf("%d\t%.2f\n", fahr, (fahr - 32) * (5.0/9.0));
    }
    system("PAUSE");
}
