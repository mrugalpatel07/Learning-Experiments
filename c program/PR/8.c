#include<stdio.h>
int main()
{
    int n,i,j,sum=0,c;
printf("\n enter the any number");
scanf("%d",&n);
c=n;
for(i=1;i<n;i++)
{
    if(n%i==0)

    sum=sum+i;
}
if(sum==n)
printf("perfect num");
else
printf("not");
return 0;
}