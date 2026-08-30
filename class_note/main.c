#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int main()
{
    int many_people = 0;

    printf("Choose who many people in class room (2 at 30) :");

    scanf("%d", &many_people);

    if (many_people < 2 || many_people > 30)
    {
        printf("Error please enter a number between 2 and 30");
        return 1;
    }

    int class_note[many_people];

    for (int i = 0; i < many_people; i++)
    {
        class_note[i] = 21;
    }

    for (int i = 0; i < many_people; i++)
    {
        for (; class_note[i] != NULL && (class_note[i] >= 20 || class_note[i] <= 0);)
        {
            scanf("%d", &class_note[i]);
            if (class_note[i] >= 20 || class_note[i] <= 0)
            {
                printf("the note between 0 and 20\n");
            }
            else
            {
                printf("The note are Valid\n");
            }
        }
    }
    for (int i = 0; i < many_people; i++)
    {
        printf("Eleve %d: %d", i, class_note[i]);
    }
    return 0;
}