#include <stdio.h>
int length(char ch[])
{
   int count=0,i;
    
for (i=0;ch[i]!='\0';i++)
{
    count++;
}
return count;
}

int main()
{
   char str[100];
   printf("\n enter the string=");
   gets(str);
   printf("\n orignelvalue of string=%s",str);
   
   int answer = length(str);

   printf("\n length of string = %d",answer);
    return 0;
}