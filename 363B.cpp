//#include<bits/stdc++.h>
//#define ll                          long long int
//#define fastread()                  (ios::sync_with_stdio(0),cin.tie(0));
//#define ekdin_to_ferot_jetei_hobe   return 0;
//using namespace std;
//int main()
//{
//
//    fastread();
//
//    int n,k,j=0,cnt=0,i,min=9999999,sum=0;
//    cin>>n>>k;
//    int a[n];
//    for(int i=0;i<n;i++)
//    {
//
//        cin>>a[i];
//
//    }
//    for(i=0;i<n-(k-1);i++)
//    {
//        cnt=k;//cnt=3
//        j=i;//0
//        while(cnt--)
//        {
//            sum+=a[j];//8
//            j++;//4
//        }
//        if(sum<min)
//            min=sum;//8
//
//    }
//
//    cout<<min;
//
//    ekdin_to_ferot_jetei_hobe;
//}
//
#include <bits/stdc++.h>

using namespace std;


typedef long long int  ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    ll n,m,sol,val,acc,bst=-1;
    cin>>n>>m;
    ll nn[n];
    for(int i=0;i<n;i++)
    {
        cin>>nn[i];
        if(i<m)
            val+=nn[i];
        else if(i>=m)
        {
            if(val<=bst || bst==-1)
                sol=i+1,bst=val;

            val=val-nn[i-m]+nn[i];
        }
    }
    if(val<=bst || bst==-1)
        sol=n+1;

    cout<<sol-m;
    return 0;
}
