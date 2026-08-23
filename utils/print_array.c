#include <stdlib.h>
#include <stdio.h>

void print_array(int arr[],size_t count) 
    {
    printf("[\n");
    for (size_t i = 0; i < count; i++)
    {
        printf(" %d", arr[i]);
        if (i % 5 == 0)
        {
            printf(",");
        }
        else if (i != count - 1)
        {
            printf(",\n");
        }
        
        
    }
    printf("]\n");

    
}

int main() {
    int arr[] = {10,20,40,20};

    size_t count = sizeof(arr) / sizeof(arr[0]);

    print_array(arr, count);
}