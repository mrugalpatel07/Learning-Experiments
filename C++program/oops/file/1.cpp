#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream MyFile("first.txt");
    MyFile<<"Hello i am mrugal";
    MyFile<<"\nstudent of tops";
    MyFile.close();
    return 0;
}
