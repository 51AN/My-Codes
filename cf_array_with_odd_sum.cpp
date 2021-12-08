#include<bits/stdc++.h>
using namespace std;

 
bool areSame(int a[],int n)
{
    unordered_map<int,int> m;
     
    for(int i=0;i<n;i++)
       m[a[i]]++;
      
    if(m.size()==1)
       return true;
    else
       return false;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n,odd=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
          {
            cin>>a[i];
            if(a[i]%2!=0)
                odd++;

          }

        if(odd!=0 && n%2==0 && areSame(a,n))
            cout<<"NO"<<"\n";     
        else if(odd==0)
            cout<<"NO"<<"\n";
        
        else 
            cout<<"YES"<<"\n";
    }
    
    
    return 0;    
}