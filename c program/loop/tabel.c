#include<stdio.h>
int main()
{
    int n1,i;
    printf("\n enter the value= ");
    scanf("%d",&n1);

    for (i=1;i<=10;i++)
    {
        printf("%d * %d = %d",n1,i,n1*i);
        printf("\n");

    }
    return 0;
}