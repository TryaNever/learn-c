#include <stdlib.h>
#include <stdio.h>

int fixer_bits(int x, int y, int p, int n);
int get_bits_n(int x , int n);
void print_binary(unsigned int x);

int main()
{
    int x = 178;
    int p = 2;
    int n = 2;
    int y = 5;

    unsigned int res = fixer_bits(x, y, p, n);

    system("PAUSE");
}

// int x : number want edit
// int y : number for edit
// int p : position edit x
// int n : number a change

int fixer_bits(int x, int y, int p, int n)
{
    unsigned int mask;

    y = get_bits_n(y,n);
    y = y << p;

    mask = ~(~0u << n) << p;

    x = (x & ~mask) | y;

    print_binary(x);

    return x;
}

int get_bits_n(int x , int n) {
    unsigned int mask = ~(~0u << n);
    return x & mask;
}

void print_binary(unsigned int x)
{
    for (int i = sizeof(x) * 8 - 1; i >= 0; i--)
    {
        printf("%d", (x >> i) & 1);

        if (i % 4 == 0)
            printf(" ");
    }

    printf("\n");
}