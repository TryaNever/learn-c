#include <stdio.h>
#include <stdlib.h>

int main()
{
    int many_people = 0;

    printf("Choose who many people in class room (2 at 30) :");

    scanf("%d", &many_people);

    if (many_people > 30 || many_people < 2)
    {
        printf("Error please enter a number between 2 and 30");
        return 1;
    }

    int class_note[many_people] = {0};
}