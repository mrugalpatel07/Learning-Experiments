#include<stdio.h>
int main()
{
	int num,sum=0,i;
printf("\n enter the number= ");
scanf("%d",&num);
for(i=1;i<=num/2;i++);
{
	if(num%i==0)
	{
		sum = sum +i;
	}
}
if(sum==num)
{ 
printf("\n %d is the perfect number",num);
}
else
{
	printf("\n %d is the not perfect number",num);
}

	return 0;
}
