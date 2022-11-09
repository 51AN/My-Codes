#include<bits/stdc++.h>
#define ll                                               long long int
#define ektu_chalak_na_hole_duniya_te_tika_boroi_kothin  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe                        return 0;
#define nl                                                "\n"

using namespace std;

bool checkString(string s){
    string f = "Timru";

    sort(s.begin(),s.end());
    
    if(f == s){
        return true;
    }
    else{
        return false;
    }
    

}

int main()
{
    ektu_chalak_na_hole_duniya_te_tika_boroi_kothin;

    ll t;
    cin>>t;

    while(t--){
    ll n;
    cin>>n;
    string s;
    cin>>s;

    if(checkString(s)){
        cout<<"YES"<<nl;
    }
    else{
        cout<<"NO"<<nl;
    }

    

    }

    ekdin_to_ferot_jetei_hobe;
}