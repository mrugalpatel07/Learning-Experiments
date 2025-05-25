#include <stdio.h>
#include<string.h>

int main(){

    char strg1[100],strg2[100];
     printf(" enter the string=");
     gets(strg1);
     printf("\n entre the string= ");
     gets(strg2);

     printf("\n enter the length of strg1 = %s",strg1);
     printf("\n enter the length of strg2=%s",strg2);
      
     int length=strlen(strg1);
	
     printf("\nLength of strg1 = %d",length);
     printf("\nLength of strg2 = %d",strlen(strg2));
    
    return 0;
}