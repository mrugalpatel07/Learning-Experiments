#include<stdio.h>
int main()
{
	int num1,num2;
	printf("\n enter the value of num1= ");
	scanf("%d",&num1);
	printf("\n enter the value of num2= ");
	scanf("%d",&num2);
	
	if(num1>num2)
	{
	printf("\n%d biggest number",num1);
}
	else if(num1<num2)
{
	printf("\n%d biggest number",num2);
}
	else
	{
	printf("\n%d is %d similler",num1,num2);
}
	return 0;
}
