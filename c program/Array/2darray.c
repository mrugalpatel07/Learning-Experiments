#include <stdio.h>

int main(){
    int a[100][100],i,j,row,col;
    printf("\n enter the row size =");
    scanf("%d",&row);
    printf("\n enter the col size =");
    scanf("%d",&col);

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("\n enter the element a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);

        }
    }
    printf("\n 2d array = \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}