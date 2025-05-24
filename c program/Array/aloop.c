#include <stdio.h>

int main()
{
    int roll[5],i;
    for (i = 0; i < 5; i++)
    {
        printf("\n enter the rool no of student= ");
        scanf("%d",& roll[i]);
    }
    for (i = 0; i < 5; i++)
        
    {
        printf("\n student  roll number %d=%d", i + 1, roll[i]);
    }
    return 0;
}