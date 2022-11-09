#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,c1=0,c2=0;
        cin>>n;
        while(n>0)
        {
            if(n<2)goto a;
            n-=2;
            c2++;
            if(n==0)break;
        a:
            n-=1;
            c1++;
        }
        cout<<c1<<" "<<c2<<endl;
    }



    return 0;
}
