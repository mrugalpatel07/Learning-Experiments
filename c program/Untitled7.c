#include<stdio.h>
int main()
{
	 int age;
	  printf("\n enter the age= ");
	  scanf("%d",&age);
	  
	switch( age>18)
	{
		case 1:
			printf("\n you are eligible for the voting");
			break;
	
	
	 case 0:
	 	printf ("\n you are not eligible for voting");
	 	break;
	 	
}

  return 0;
}
