#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s1=0,s2=0;
        cin>>n;
        int a[n+1];
        for(int i=1;i<n;i++)
        {
            if(i<n/2)
                s1+=pow(2,i);
            else
                s2+=pow(2,i);

        }
        s1+=pow(2,n);
        cout<<s1-s2<<endl;

    }
    return 0;
}
