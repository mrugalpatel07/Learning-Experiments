#include<stdio.h>
int main()
{
    int n,cout=0,i;
printf("enter any number=");
scanf("%d",&n);
for(i=2;i<n;i++)
{
    if(n%i==0)
{
cout++;
}
}
if(cout==0)
{
printf("prime number");
}
else
printf("\n not prime");
return 0;
}