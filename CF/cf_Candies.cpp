#include<bits/stdc++.h>
using namespace std;
int main()
{
    std::ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=2;i<10e9;i++)
        {
            int p=pow(2,i)-1;
            if(n%p==0)
            {
                cout<<n/p<<"\n";
                break;
            }
        }


    }


    return 0;
}