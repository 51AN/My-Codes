#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {

        double i,n;
        long long int k;
        cin>>n;
        i=n/3;
        k=n/3;
        if(i>round(i))
        {
            cout<<k+1<<" "<<k<<endl;
        }
        else if(i<round(i))
        {
            cout<<k<<" "<<k+1<<endl;
        }
        else
            cout<<k<<" "<<k<<endl;
    }
    return 0;
}
