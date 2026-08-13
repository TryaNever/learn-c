#include <stdio.h>
#include <stdlib.h>

int main() {
    int min,range;
    long long int max,fahr;
    float celcus;

    min = 0;
    max = 2000000000000000000;
    range = 1;

    fahr = min;

    while (fahr <= max)
    {
        celcus = (fahr - 32) * 5/9;
        printf("|%3.0f  |  %6.2f|\n",fahr,celcus);
        fahr = fahr + range;
    }
    system("PAUSE");
}