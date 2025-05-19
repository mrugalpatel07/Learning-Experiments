#include<iostream>
using namespace std;
int main()
{
    int n;
    do{
        cout<<"enter any number =";
        cin>>n;
        if(n%10==0){
            break;
        }
        cout<<"you entred"<<n<<endl;
    }while(true);
    return 0;
}