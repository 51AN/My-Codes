#include <bits/stdc++.h>
using namespace std;
int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n,i,j,k;
    string s,t;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s>>t;
        bool init=false;

    for(j=0;j<s.length();j++)
        {
            for(k=0;k<t.length();k++)
                {
                if(t[k]==s[j])
                    {
                    init=true;
                    cout<<"YES"<<endl;
                    break;
                    }


                if(init==true)
                    break;
                }
                if(init==true)
                    break;
        }
        if(init==false)
            cout<<"NO"<<endl;


    }
    return 0;
}
