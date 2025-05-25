#include <stdio.h>
struct student
{
    int roll;
    float per;
    char grade;
};

int main()
{
    struct student s[50];
    int size, i;
    printf("\n enter the size=");
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        printf("\n enter the details for student %d", i + 1);
        printf("\n roll no.= ");
        scanf("%d", &s[i].roll);
        printf("\n perstntage= ");
        scanf("%f", &s[i].per);
        printf("\n grade= ");
        scanf(" %c", &s[i].grade);
    }

    printf("\nroll\tperstntage\tgrade");
    for (i = 0; i < size; i++)
    {
        printf("\n%d\t%.2f\t\t %c", s[i].roll, s[i].per, s[i].grade);
    }

    return 0;
}