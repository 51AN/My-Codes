#include<bits/stdc++.h>
#define ll                                               long long int
#define ektu_chalak_na_hole_duniya_te_tika_boroi_kothin  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe                        return 0;
#define nl                                                "\n"


using namespace std;


int main()
{

    ll t;
    cin>>t;

    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];

        for(int i=0 ; i<n ; i++)
        {
            cin>>a[i];
        }
        bool isOddOdd = true, isEvenEven=true, isOddEven=true, isEvenOdd=true;
        for(int i=0 ; i<n ; i+=2)
        {
            if(a[i]%2 == 0)
            {
                isOddOdd = false;
            }

            if(a[i]%2 == 1)
            {
                isOddEven = false;
            }
        }
        for(int i=1 ; i<n ; i+=2)
        {
            if(a[i]%2 == 0)
            {
                isEvenOdd = false;
            }

            if(a[i]%2 == 1)
            {
                isEvenEven = false;
            }
        }
        


        if((isEvenEven && isOddOdd) || (isEvenOdd && isOddEven) || (isEvenEven && isOddEven) || (isEvenOdd && isOddOdd))
        {
            cout<<"YES"<<nl;
        }
        else
        {
            cout<<"NO"<<nl;
        }

    }

    ekdin_to_ferot_jetei_hobe;
}