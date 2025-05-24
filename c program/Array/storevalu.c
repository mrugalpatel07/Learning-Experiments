#include <stdio.h>

int main()
{
    int rool[100], i, size;
    printf("\n enter the  arry value=");
    scanf("%d", &size);
    for (i = 0; i < size; i++)
        
    {
        printf("enter the roll[%d]=", i);
        scanf("%d",& rool[i]);
    }
    for (i = 0; i < size; i++)
    {
        printf("\n student roll number %d = %d", i + 1, rool[i]);
    }
    return 0;
}