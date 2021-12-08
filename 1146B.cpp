#include<bits/stdc++.h>
#define ll                                               long long int
#define ektu_chalak_na_hole_duniya_te_tika_boroi_kothin  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe                        return 0;
#define nl                                                "\n"
using namespace std;
int main()
{

    ektu_chalak_na_hole_duniya_te_tika_boroi_kothin;
    string s;
    cin>>s;
    int n=s.length();
    string t="";
    for(int i=0;i<n;i++)
    {
    	if(s[i]!='a')
    	t+=s[i];
    }
    if(t.length()%2!=0)
    {
    	cout<<":(";
    	return 0;
    }
    int p=t.length()/2;
    string s1=t.substr(0,p);
    string s2=t.substr(p,t.length());
 
    int l=t.length()-p;
    int f=n-l;
     for(int i=n-1;i>=f;i--)
     {
    	if(s[i]=='a')
        {
    	cout<<":(";
    	return 0;
    	}
    }
    if(s1==s2)
    {
    	for(int i=0;i<f;i++)
    	cout<<s[i];
    }
    else
    cout<<":(";
    
    

    ekdin_to_ferot_jetei_hobe;
}
