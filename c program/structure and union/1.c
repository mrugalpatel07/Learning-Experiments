#include <stdio.h>
struct student
{
    int roll;
    char grade;
    float per;
};
int main(){
    
    struct student s1,s2,s3;
    s1.roll=102;
    s2.grade='A';
    s3.per=56.7;
    printf("\n the roll number is %d",s1.roll);
    printf("\n the grade  is %c",s2.grade);
    printf("\n the per  is %.2f",s3.per);

    return 0;
}