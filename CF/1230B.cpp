#include<bits/stdc++.h>
#define ll                                               long long int
#define ektu_chalak_na_hole_duniya_te_tika_boroi_kothin  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe                        return 0;
#define nl                                                "\n"
using namespace std;
int main()
{

    ektu_chalak_na_hole_duniya_te_tika_boroi_kothin;

    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    if(k==0)
        {
            cout<<s;
            return 0;
        }
    if(s[0]=='1')
    {
        if(n==1)
        {
            cout<<'0'<<nl;
            return 0;
        }
        int i=1;
        int cnt=0;
        while(k--)
        {
            if(s[i]=='0')
            {
                k++;
            }
            s[i]='0';
            i++;
            ++cnt;
            if(cnt==(n-1))
            {
                break;
            }
        }
        cout<<s;
    }
    else
    {
        if(n==1)
        {
            cout<<'0'<<nl;
            return 0;
        }
        s[0]='1';
        int i=1;
        int cnt=0;
        k--;
        while(k--)
        {
            if(s[i]=='0')
            {
                k++;
            }
            s[i]='0';
            i++;
            ++cnt;
            if(cnt==(n-1))
            {
                break;
            }
        }
        cout<<s;
        


    
    }
    
    

    ekdin_to_ferot_jetei_hobe;
}
