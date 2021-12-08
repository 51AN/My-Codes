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
       int x,y,z;
       cin>>x>>y>>z;
       if(x==y && y==z)
       {
           cout<<"YES"<<"\n";
           cout<<x<<" "<<x<<" "<<y<<"\n";
       }
       else
       {
       if(x==y)
       {
           if(z<x)
           {
               cout<<"YES"<<"\n";
               cout<<x<<" "<<z<<" "<<z<<"\n";
           }
           else
            cout<<"NO"<<"\n";
       }
       else if(x==z)
       {
           if(y<x)
           {
               cout<<"YES"<<"\n";
               cout<<y<<" "<<x<<" "<<y<<"\n";
           }
           else
            cout<<"NO"<<"\n";
       }
       else if(z==y)
       {
           if(x<y)
           {
               cout<<"YES"<<"\n";
               cout<<x<<" "<<x<<" "<<y<<"\n";
           }
           else
            cout<<"NO"<<"\n";
       }
       else
           cout<<"NO"<<"\n";
       }
    }

    ekdin_to_ferot_jetei_hobe;
}

