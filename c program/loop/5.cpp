#include<stdio.h>
int main()
{ 
 int count,i,n,sum=0;
 printf("\n enter the count= ");
 scanf("%d"&count);
 for(i=1;i<=count;i++)
 {
 	printf("\n enter the number %d = ",i);
 	scanf("%d",&n);
 	sum = sum + n;

 }
 printf("\n the addition is = %d",sum);
 printf("\n the average is = %.2f",(float)sum/(float)count);
 return 0;
}
