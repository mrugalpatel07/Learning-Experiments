#include<stdio.h>
int main ()
{
	 int n1,n2,n3;
	 printf("\n enter the value of n1= ");
	 scanf("%d",&n1);
	printf("\n enter the value of n2= ");
	 scanf("%d",&n2);
	 printf("\n enter the value of n3= ");
	 scanf("%d",&n3);
	 
	 if(n1>n3)
 {
	 	if(n1>n3)
	 	{
	 	printf("\n %d is the biggest number",n1);
	 }
	 	
	else
	{
		printf("\n %d is the biggest number",n3);
	}
	
		
}
	else
{
	
	if(n2>n3) 
	{
		printf("\n %d is the biggest number",n2);
	
	 }
	
	 else
	 {
	 	printf("\n %d is the biggest number",n3);
	 	
	 }
}
	 return 0;
}
