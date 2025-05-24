#include<stdio.h>
int main()
{
	long int amt,ans;
	up:
	printf("\n enter the amount= ");
	scanf("%ld",&amt);
	
	if(amt<=0)
	{
	printf("\n invalid oprestion");
	goto up;
}
	
	if(amt>=500)
	{
	ans= amt/500;
	printf("\n 500 notes ---> %d",ans);
	amt-=ans*500;
}
if(amt>=200)
{
	ans=amt/200;
	printf("\n 200 notes---> %d",ans);
	amt-=ans*200;
}
if(amt>=100)
{
	ans=amt/100;
	printf("\n 100 notes ----> %d",ans);
	amt-=ans*100;
}
if(amt>=50)
{
	ans=amt/50;
	printf("\n 50 notes----> %d",ans);
	amt-=ans*50;
}
if (amt>=20)
	{ 
	ans=amt/20;
	printf("\n 20 notes---> %d",ans);
	amt-=ans*20;
	}
if (amt>=10)
{
	 ans=amt/10;
	 printf("\n 10 notes ---> %d",ans);
	 amt-=ans*10;
	}
if (amt>=5)	
{
    ans=amt/5;
    printf("\n 5 notes ---> %d ",ans);
    amt-=ans*5;
}
if (amt>=2)
{
 ans=amt/2;
 printf("\n 2 notes ---> %d", ans);
 amt-=ans*2;
}
 if(amt>1)
 {
 	ans=amt/1;
 	printf("/n 1 note ---> %d", ans);
 	amt-=ans*1;
 }
    
	return 0;
}

