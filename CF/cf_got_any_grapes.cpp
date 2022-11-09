#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[4],s[4];
    for(int i=0;i<3;i++)
        cin>>a[i];
    for(int i=0;i<3;i++)
        cin>>s[i];

    if(a[0]<=s[0])
    { 
        s[0]=s[0]-a[0];
    }
    else
    {
        cout<<"NO"<<endl;
        return 0;
    }
    int m=0;
    m=(s[0]+s[1]);

    if(a[1]<=m)
    {
        
        m-=a[1];
    }
    else
    {
        cout<<"NO"<<endl;
        return 0;
    }
    m+=s[2];

    if(a[2]<=m)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    



    return 0;
}