#include <stdio.h>
#include <string.h>
 
int main(){
    char stg1[100],stg2[100];

 printf("\n enter the string 1 =");
 gets(stg1);
 printf("\n enter the string2=");
 gets(stg2);

 printf("\n enter the orignel value of string1=%s",stg1);
 printf("\n enter the orignal value of string2=%s",stg2);

 strupr(stg1);
 strlwr(stg2);

 printf("\n enter the vlaue of start using uper=%s",stg1);
 printf("\n enter the vlaue of start using lower=%s",stg2);
    
    return 0;
}