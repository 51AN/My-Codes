#include<bits/stdc++.h>
#define ll                                               long long int
#define ektu_chalak_na_hole_duniya_te_tika_boroi_kothin  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe                        return 0;
#define nl                                                "\n"
using namespace std;

void find_the_string(int n,int a,int b)
{

    char ch[]="abcdefghijklmnopqrstuvwxyz";
    string s;
    for(int i=0;i<b;i++)
    {
        s[i]=ch[i];
    }
    int j=0;
    while(n--)
    {
        cout<<s[j];
        j++;
        if(j==b)
        {
            j=0;
        }
    }
    cout<<nl;

}

int main()
{

    ektu_chalak_na_hole_duniya_te_tika_boroi_kothin;
    int t;
    cin>>t;
    while(t--)
    {
    int n,a,b;
    cin>>n>>a>>b;
    find_the_string(n,a,b);
    }

    ekdin_to_ferot_jetei_hobe;
}
