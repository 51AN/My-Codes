#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,floorcnt=1,sum=2;

        cin>>n>>x;

        if(n<=2)
        {
            cout<<"1"<<"\n";
        }
        else
        {
            while(n>sum)
            {
            sum += x;
            floorcnt++;
            }
            cout<<floorcnt<<"\n";
        }
    }


    return 0;
}