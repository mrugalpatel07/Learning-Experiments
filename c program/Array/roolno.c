#include <stdio.h>

int main(){
    int roll[5],i;

    printf("\n enter the roll number 1=");
    scanf("%d",&roll[0]);
    printf("\n enter the roll number 2=");
    scanf("%d",&roll[1]);
    printf("\n enter the roll number 3=");
    scanf("%d",&roll[2]);
    printf("\n enter the roll number 4=");
    scanf("%d",&roll[3]);
    printf("\n enter the roll number 5=");
    scanf("%d",&roll[4]);

    printf("\n roll no.1 %d = %d",i+1,roll[0]);
    printf("\n roll no.2 %d = %d",i+1,roll[1]);
    printf("\n roll no.3 %d = %d",i+1,roll[2]);
    printf("\n roll no.4 %d = %d",i+1,roll[3]);
    printf("\n roll no.5 %d = %d",i+1,roll[4]);

    return 0;
}