#include<stdio.h>
int main()
{
    int n,c,arm=0,r;
    printf("\n enter any number");
    scanf("%d",&n);
    c=n;
    
    while(0<n)
    {
        r=n%10;
        arm=(r*r*r)+arm;
        n=n/10;
    }
   if(c==arm)
   printf("\n arm number");
   else
   printf("\n not ");
}