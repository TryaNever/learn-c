#include <stdio.h>
#include <stdlib.h>


int count_number_bits(int x);
int main() {
    unsigned int x = 15;
    int count_result = 0;

    count_result = count_number_bits(x);
    printf("%d", count_result);
}

int count_number_bits(int x) {
    int count = 0;

    while (x != 0)
    {
        x &= (x -1);
        count++;
    }
    return count;
}