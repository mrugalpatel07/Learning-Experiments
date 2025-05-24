#include <stdio.h>

int main()
{
    int a[100], i, j, size;
    printf("\n enter the arry size=");
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        printf("enter the element in a[%d]", i);.
        scanf("%d", &a[i]);
    }
    printf("\n unique number element = ");
    for (i = 0; i < size; i++)
    {
        int count = 0 ;
        for (j = 0; j < size; j++)
        {
             if (i != j)
                 {
                     if (a[i] == a[j])
                     {
                       count = 1;
                           break;
                        }
                }
        
        }
        if (count==0)
        {
        printf("\n %d",a[i]);
        }       
    
    }



return 0;
}