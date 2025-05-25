#include<stdio.h>
int main()
 {
 	int n,sum=0,i;
 	
 	printf("\n enter value =");
 	scanf("%d",&n);
 	
 	for(i=1;i<=n;i++)
 	{
 		sum= sum + i;
}

printf("\n the addition is = %d ",sum);
printf("\n the average is= %.2f",(float)sum/(float)n);
 	return 0;
 }
