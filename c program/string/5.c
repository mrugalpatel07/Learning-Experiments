#include <stdio.h>

int main(){
    char ch[100];
    printf("enter the string= ");
    fgets(ch,sizeof(ch),stdin);
    printf("%s",ch);
    return 0;
}