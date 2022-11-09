#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        int k,cnt=1;
        cin>>k;
        int a[1001];
        int flag=0;
        
        for(int i=1;;i++)
        {
            if((i%3==0 || (i%10)==3))
            {
                continue;
            }
            else
            {
                a[cnt]=i;
                if(cnt==k)
                flag=1;
                cnt++;
            }
            
            if(flag==1)
                break;
        }
        cout<<a[k]<<"\n";




    }


    return 0;
}