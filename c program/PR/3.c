#include<stdio.h>
int main()
{
    int n1,n2,ans;
     printf("\n enter the first number=");
     scanf("%d",&n1);
     printf("\n enter the second number=");
     scanf("%d",&n2);

     ans=n1+n2;
     printf("\n the addition of %d and %d is %d",n1,n2,ans);

     ans=n1-n2;
     printf("\n the substrcstion of %d and %d is %d",n1,n2,ans);
     
     ans=n1*n2;
     printf("\n the multiplicaston of %d and %d is %d",n1,n2,ans);

     ans=n1/n2;
     printf("\n the division of %d and %d is %d",n1,n2,ans);
    return 0;
}