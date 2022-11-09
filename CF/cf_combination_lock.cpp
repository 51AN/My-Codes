#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;

    string s,c;

    cin>>s;
    cin>>c;
    
    int i=0,j=0,sum=0,d=0;
    for(i=0;i<n;i++)
    {
        d=abs(s[i]-c[j]);
        if(d<5)
        {
            sum += d;
        }
        else if(d>=5)
        {
            sum += (10-d);
        }
        j++;
    }
    cout<<sum;

    return 0;
}