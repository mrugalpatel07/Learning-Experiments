#include<stdio.h>
int main()
{
int n1,n2,i;

  printf("\n enter the value of n1= ");
  scanf("%d",&n1);
  printf("\n enter the value of n2= ");
  scanf("%d",&n2);
  
  for(i=n1;i<=n2;i++)
  {

  if(i % 2 == 0)
  {

  printf (" %d ",i);
}
}

  for(i=n1;i<=n2;i++){
  
  if(i % 2 != 0)
  {
  
  printf("%d",i);
}
}
	return 0;
}
