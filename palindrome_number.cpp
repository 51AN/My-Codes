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
        int a,b;
        cin>>a>>b;
        ll sum=0;
        for(int i=a;i<=b;i++)
        {
            int rev=0,rem=0,temp=i;
            while(temp!=0)
            {
                rem=temp%10;
                rev=rev*10 + rem;
                temp/=10;
            }
            if(rev==i)
                sum+=i;
        }
        cout<<sum<<"\n";
    }


    ekdin_to_ferot_jetei_hobe;
}

