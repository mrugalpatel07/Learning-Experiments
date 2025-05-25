#include<stdio.h>
int main()
{
	int i,j,n1,temp=i;
	printf("\n enter the value for patten= ");
	scanf("%d",&n1);
	
	for(i=1;i<=n1;i++)
	{
	   for(j=1;j<=i;j++)
	
{	
	printf("%d ",temp);
	temp++;
}
printf("\n");
}
	
	return 0;
}
