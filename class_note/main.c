#include <stdio.h>
#include <stdlib.h>

int get_note(int student_number);

int main()
{
    int many_people;

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
        class_note[i] = get_note(i + 1);
    }

    for (int i = 0; i < many_people; i++)
    {
        printf("Eleve %d: %d \n", i + 1, class_note[i]);
    }
    return 0;
}

int get_note(int student_number)
{
    int note;

    do
    {
        printf("The note for student %d : ", student_number + 1);
        scanf("%d", &note);
        if (note > 20 || note < 0)
        {
            printf("the note between 0 and 20\n");
        }
        else
        {
            printf("The note are Valid\n");
        }
    } while (note > 20 || note < 0);
}