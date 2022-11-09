#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int q;
    cin>>q;
    while(q--)
    {
        long long int n;
        long long int a,b;

        cin>>n>>a>>b;
        if(ceil(1.0*b/a)<=2)
            {
                if(n%2==0)
                {
                    n=(n/2)*b;
                }
                else
                {
                    n=(n/2)*b + a;
                }
            }
        else
        {
            n=n*a;
        }
        cout<<n<<"\n";

    }


    return 0;
}