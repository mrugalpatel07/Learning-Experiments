#include<stdio.h>
void rev(char ch[]);
void rev(char ch[])
{
    int count=0,i;
    for(i=0;ch[i]!='\0';i++)
    {
        count++;
    }
    for(i=count-1;i>=0;i--)
    {
        printf("%c",ch[i]);
    }

}
int main()
{
    char str[100];
    printf("\n Enter th string = ");
    gets(str);

    rev(str);


    return 0;
}