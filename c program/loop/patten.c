#include<stdio.h>
int main()
{
	int row,col,i,j;
	char x;
	printf("enter the row value= ");
	scanf("%d",&row);
	printf("enter the col value= ");
	scanf("%d",&col);
	printf("enter the charector= ");
	scanf(" %c",&x);
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=col;j++)
		{
			printf(" %c ",x);
		}
	        printf("\n");
}

	return 0;
}
