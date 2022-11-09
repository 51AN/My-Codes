#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        float a;
        cin>>a;

        float s1;
        int s2;
        s1=(360/(180-a));
        s2=round(s1);

        if(s1==s2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }


    return 0;
}
