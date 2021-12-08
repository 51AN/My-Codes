#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int a[1000000]={0};
    for(int i=2;i<=1000000;i++)
    {
        if(a[i]==0)
        {
            for(int j=2;i*j<=1000000;j++)
            {
                a[i*j]=1;
            }
        }
    }
    int n;
    cin>>n;
    long long int x;
    long long int sqare;
    for(int i=0;i<n;i++)
    {
        cin>>
        x;
        sqare=sqrt(x);
        if(x==1)
            cout<<"NO"<<endl;
        else if(sqare*sqare==x && a[sqare]==0)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;

    }

//    int n;
//    cin>>n;
//    long long int a[n];
//    for(int i=0;i<n;i++)
//        cin>>a[i];
//    for(int i=0;i<n;i++)
//    {   int cnt=0;
//        for(int j=1;j<=a[i];j++)
//        {
//            if(a[i]%j==0)
//                cnt++;
//        }
//        if(cnt==3)
//            {
//            printf("YES\n");
//            }
//        else
//        {
//            printf("NO\n");
//        }
//    }


}
