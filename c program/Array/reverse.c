#include <stdio.h>

int main(){
    int a[100],size,i;
    printf("\n enter the size of arry=");
    scanf("%d",&size);

    for(i=0;i<size;i++)
    {
        printf("\n ener the element in a[%d]=",i);
        scanf("%d",&a[i]);
    }
    printf("\n reverse arry=");
    for(i=size-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
    return 0;
}