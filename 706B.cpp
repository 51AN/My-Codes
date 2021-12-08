#include<bits/stdc++.h>
#define ll                          long long int
#define fastread()                  (ios::sync_with_stdio(0),cin.tie(0));
#define ekdin_to_ferot_jetei_hobe   return 0;
using namespace std;
int main()
{

    fastread();

//    int n;
//    cin>>n;
//    int a[n];
//    for(int i=0;i<n;i++)
//    {
//
//        cin>>a[i];
//    }
//    sort(a,a+n);
//
//    int q;
//    cin>>q;
//    int b[q];
//    for(int i=0;i<q;i++)
//    {
//
//        cin>>b[i];
//    }
//    int flag=0;
//    for(int i=0;i<q;i++)
//    {
//        for(int j=0;j<n;j++)
//        {
//                if(b[i]<=a[j])
//                {
//
//                    if(b[i]<a[j])
//                        cout<<j<<"\n";
//                    else
//                        cout<<j+1<<"\n";
//                    flag=1;
//                    break;
//                }
//
//        }
//        if(flag==0)
//            cout<<n<<"\n";
//        flag=0;
//    }
int q,n,i,k,ans;
    cin>>n;
    int a[n];
    int cnt=0;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cin>>q;
    sort(a,a+n);
    while(q--)
    {
        cin>>k;
        ans=upper_bound(a,a+n, k)-a;//This is a function which finds out the position
                                    //(can be greater than but smaller than the next position)
                                    //where the given value (k) is present
        cout<<ans<<endl;
    }
    ekdin_to_ferot_jetei_hobe;
}
