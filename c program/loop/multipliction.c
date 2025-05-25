#include<stdio.h>
int main()
{
	int n1,n2,i,j;
	printf("\n The number for = ");
	scanf("%d",&n1);
	printf("\n The number for = ");
	scanf("%d",&n2);
	
	
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=1;j++)
		{
			printf("\n %d * %d = %d",n1,i,n1*i);
			printf("\t  %d * %d = %d",n2,i,n2*i);
			
		}
		printf("\n");
	}
	
	
	
	return 0; 
}
