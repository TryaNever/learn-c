#include <stdio.h>
#include <stdlib.h>

int main() {
    int min,max,range;
    float fahr, celcus;

    min = 0;
    max = 2000;
    range = 20;

    fahr = min;

    while (fahr <= max)
    {
        celcus = (fahr - 32) * 5/9;
        printf("%3.0f\t%6.2f\n",fahr,celcus);
        fahr = fahr + range;
    }
    system("PAUSE");
}