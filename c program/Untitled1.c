#include<stdio.h>
#include<math.h>
int main ()
{
	
int n1,n2,power,ans;
char choice;
char mod ='%';
up:

printf("\nenter the value of n1 = ");
scanf("%d",&n1);
printf("\nenter the value of n2 = ");
scanf("%d",&n2);

printf("\n\npress'+'for addition");
printf("\npress'-' for subsrecstion");
printf("\npress'*' for multiplicastion");
printf("\npress'/' for division");
printf("\npress'%'for reminder");
printf("\npress'p'for power");
printf("\npress'2'for square");
printf("\npress'3'for cube");
printf("\npress's'for square root");
printf("\n press'x' for exit");
printf("\n\nenter your choice= ");
scanf(" %c",&choice);

switch(choice)
{ 
case '+':
	printf("\nthe addition of %d and %d is % d",n1,n2,n1+n2);
	break;
case '-':
	printf("\nthe substrecstion of %d and %d is %d",n1,n2,n1-n2);
	break;
case '*':
	printf("\nthe multiplicastion of %d and %d is %d",n1,n2,n1*n2);
	break;
case '/':
    printf("\nthe division of %d and %d is %d",n1,n2,(float)n1/(float)n2);
    break;
case '%':
	printf("\n the reminder of %d and %d is %d",n1,n2,n1%n2);
	break;
case 'p':
	power=pow(n1,n2);
	printf("\n the power of %d and %d is %d",n1,n2,power);
	break;
case '2':
	printf("\nsqure of %d  is %d",n1,n1*n1);
	printf("\nsqure of %d is %d",n2,n2*n2);
	break;
case '3':
	printf("\ncube of %d is %d",n1,n1*n1*n1);
	printf("\ncube of %d is %d",n2,n2*n2*n2);
	break;
case's':
	ans=sqrt(n1);
	printf("\nsqure root of %d is %d",n1,ans);
	ans=sqrt(n2);
	printf("\nsqure root is %d is %d",n2,ans);
	break;
	case 'x':
	goto down;	
}
goto up;
down:

return 0;
}
