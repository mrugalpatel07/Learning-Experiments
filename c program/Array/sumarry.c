#include <stdio.h>

int main()
{
    int a[100], i, size, sum=0;
    printf("\n enter the arry size=");
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        printf("\n enter the element a[%d]=", i);
        scanf("%d",&a[i]);
    }
    for (i = 0; i < size; i++)
    {
        sum = sum + a[i];
    }
    printf("\n the value of sum is %d", sum);
    printf("\n the aevrage of element=%.2f is",(float)sum/(float)size);

    return 0;
}