#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m;

    cin>>n>>m;

    int flag=0;

    for(int i=2;i<m;i++)
    {
        if(m%i==0)
        {
         flag=1;
         break;
        }
    }
    if(flag==1)
    {
        cout<<"NO";
    }
    else
    {
        int a[20];
        int num=4;
        a[1]=2;
        a[2]=3;
        int cnt=3;
		int flag=0;
        for(num=4;num<50;num++)
        {
        	for(int i=2;i<num;i++)
        	{
            	if(num%i==0)
            	{
                flag=1;
                break;
            	}
        	}
            if(flag==0)
                {
                a[cnt]=num;
                cnt++;
                } 
            else
                flag=0;
        }
        for(int i=1;i<16;i++)
        {
            if(a[i]==n)
            {
                if(a[i+1]==m)
                    cout<<"YES";
                else
                    cout<<"NO";
            }
        }

    }

//     if(n==2)
//     {
//         if(m==3)
//         cout<<"YES";
//         else
//         cout<<"NO";
//     }
//     if(n==3)
//     {
//         if(m==5)
//         cout<<"YES";
//         else
//         cout<<"NO";
//     }
//     if(n==5)
//     {
//         if(m==7)
//         cout<<"YES";
//         else
//         cout<<"NO";
//     }
//     if(n==7)
//     {
//         if(m==11)
//         cout<<"YES";
//         else
//         cout<<"NO";
//     }
//     if(n==11)
//     {
//         if(m==13)
//         cout<<"YES";
//         else
//         cout<<"NO";
//     }
//     if(n==13)
//     {
//         if(m==17)
//         cout<<"YES";
//         else
//         cout<<"NO";
//     }
//     if(n==17)
//     {
//         if(m==19)
//         cout<<"YES";
//         else
//         cout<<"NO";
//     }
//     if(n==19)
//     {
//         if(m==23)
//         cout<<"YES";
//         else
//         cout<<"NO";
//     }
//     if(n==23)
//     {
//         if(m==29)
//         cout<<"YES";
//         else
//         cout<<"NO";
//     }
//     if(n==29)
//     {
//         if(m==31)
//         cout<<"YES";
//         else
//         cout<<"NO";
//     }
//     if(n==31)
//     {
//         if(m==37)
//         cout<<"YES";
//         else
//         cout<<"NO";
//     }
//     if(n==37)
//     {
//         if(m==41)
//         cout<<"YES";
//         else
//         cout<<"NO";
//     }
//     if(n==41)
//     {
//         if(m==43)
//         cout<<"YES";
//         else
//         cout<<"NO";
//     }
//     if(n==43)
//     {
//         if(m==47)
//         cout<<"YES";
//         else
//         cout<<"NO";
//     }
//     if(n==47)
//         cout<<"NO";
  

    return 0;
}