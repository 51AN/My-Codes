#include<bits/stdc++.h>
using namespace std;
int main()
{

    ios::sync_with_stdio();
    cin.tie();
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,n,cnt=0;
        cin>>a>>b>>n;
        while(n>=b)
        {
            if(b>a)
            {
                int temp;
                temp=b;
                b=a;
                a=temp;
            }
            b += a;
            cnt++;
        }
        cout<<cnt<<"\n";
    }


    return 0;
}