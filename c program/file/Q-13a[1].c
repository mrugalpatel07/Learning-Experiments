#include <stdio.h>
int main()
{
    FILE *fp1;
    char text[100];
    fp1 = fopen("second.txt","w");

    fprintf (fp1,"\n name of student.");
    fprintf (fp1,"\n mrugal patel \n meet nayak \n nisarg patel \n jay patel");

    fclose(fp1);

    fp1 = fopen ("second.txt","r");
    while(fgets(text,sizeof(text),fp1));
    {
        printf ("%s",&text);
    }
    fclose(fp1);

    printf ("\n operation sucessfull");
    return 0;
}
