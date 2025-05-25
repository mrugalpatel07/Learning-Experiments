#include <stdio.h>

int main()
{
    struct student
    {
        char name[100], grade;
        int id;
        float per;
    };
    struct student s[50];
    int size, i, choice, id;
    printf("\n enter the size=");
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        printf("\n enter the details for student %d", i + 1);
        printf("\n name= ");
        scanf("%s", &s[i].name);
        printf("\n roll no.= ");
        scanf("%d", &s[i].id);
        printf("\n perstntage= ");
        scanf("%f", &s[i].per);
        if (s[i].per > 80)
        {
            printf("\n grade = 'A'");
        }
        else if (s[i].per > 35 && s[i].per <= 80)
        {
            printf("\n grade = 'b'");
        }
        else if (s[i].per < 35)
        {
            printf("\n grade = 'c'");
        }
        printf("\n 1. display all");
        printf("\n 2. display perticuler");
        printf("\n 3. update");
        printf("\n 4. delete perticuler");

        printf("\n enter the choise = ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            display_all(s, size);
            break;
        case 2:
            printf("\nEnter the roll no. to display: ");
            scanf("%d", &id);
            display_particular(s, size, id);
            break;
        case 3:
            printf("\nEnter the roll no. to update: ");
            scanf("%d", &id);
            update_student(s, size, id);
            break;
        case 4:
            printf("\nEnter the roll no. to delete: ");
            scanf("%d", &id);
            delete_student(s, &size, id);
            break;
        case 5:
            return 0;
        default:
            printf("\nInvalid choice. Please try again.\n");

            return 0;
        }
    }
}