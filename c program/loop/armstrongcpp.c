#include<stdio.h>
#include<math.h>
int main()
{
	int num,digit=0,sum=0,i,rem ,power;
	printf("\nenter the number = ");
	scanf("%d",&num);
	int temp =num;
	int copy =num;
	while(num!=0)
	{
		num = num/10;
		digit++;
	}
	for(i=1;digit<=1;i++)	
{
	rem=temp%10;
	power= pow(rem,digit);
	sum=sum+1;
	temp=temp/10;
}
if(sum==copy)
{
	printf("\n%d is an an armstrong number",copy);
}
else
{
	printf("\n%d is not an armstrong number",copy);
}
	return 0;
}
