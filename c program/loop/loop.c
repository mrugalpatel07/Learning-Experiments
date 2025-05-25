#include<stdio.h>
int main()
{
	int n1,n2,i,j;
	printf("\n enter the n1= ");
	scanf("%d",&n1);
	printf("\n enter the n2= ");
	scanf("%d",&n2);
	int temp=n1+1;
	int copy=n1+1;
	
	for(i=1;i<=10;i++)
	{
		temp = copy;
		for(j=1;j<=(n2-n1)/10;j++)
		{
			if(j!=1)
			
		{
			temp= temp + 10;
		}
		printf("%d\t",temp);
		
	}
	printf("\n");
	copy++;
}
	return 0;
	
}
