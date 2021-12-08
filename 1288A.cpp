#include<bits/stdc++.h>
#define ll                          long long int
#define fastread()                  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe   return 0;
using namespace std;
int main()
{

    fastread();
    int t;
    cin>>t;
    while(t--)
    {
        double n,d,flag=0;
        cin>>n>>d;
        if(d<=n)
            cout<<"YES"<<"\n";

        else
        {
            for(double i=1;i<=n;i++)
            {
                double temp;
                temp=ceil(i+(d/(1+i)));

                if(temp<=n)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
                cout<<"YES"<<"\n";
            else
                cout<<"NO"<<"\n";

        }
    }


    ekdin_to_ferot_jetei_hobe;
}

