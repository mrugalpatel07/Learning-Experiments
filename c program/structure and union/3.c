#include <stdio.h>
struct student
{
    int roll,name[100];
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
        printf("\n name= ");
        scanf("%s",&s[i].name);
        printf("\n roll no.= ");
        scanf("%d", &s[i].roll);
        printf("\n perstntage= ");
        scanf("%f", &s[i].per);
        printf("\n grade= ");
        scanf(" %c", &s[i].grade);
    }

    printf("\n name\troll\tperstntage\tgrade");
    for (i = 0; i < size; i++)
    {
        printf("\n%s\t%d\t%.2f\t\t %c",s[i].name, s[i].roll, s[i].per, s[i].grade);
    }

    return 0;
}