#include <stdio.h>

int main(){
    char ch[100];
    int i;
   
    printf("\n string = ");
    gets(ch);
    
    for(i=0;ch[i]!='\0';i++)
    {
        printf("%c",ch[i]);
    }
    return 0;
}