#include<iostream>
using namespace std;
int main()
{

    int x;
    while(1)
    {
        cin>>x;
        if(x>1)
        {
            cout<<"1"<<"/"<<"2"<<endl;
        }
        else if(x==1)
        {
            cout<<"0"<<"/"<<"1"<<endl;
        }
        else if(x==0)
        {
            return 0;
        }
    }



}
