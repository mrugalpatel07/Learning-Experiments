#include<stdio.h>
int main()
{
int mat[2][2],i,j;
printf("\n enter the matrix element");
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
        scanf("%d",&mat[i][j]);
    }
}
printf("matrix element:\n");
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
        printf("%d",&mat[i][j]);
    }
    printf("\n");
}
return 0;
}