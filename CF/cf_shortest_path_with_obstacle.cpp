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
        int x1,y1,x2,y2,f1,f2;
        int sum=0;
        cin>>x1>>y1;
        cin>>x2>>y2;
        cin>>f1>>f2;

        if(f1!=x1 && f2!=y1 && f1!=x2 && f2!=y2)
            {
                sum=abs(x1-x2)+abs(y1-y2);
                cout<<sum<<"\n";
            }
        else if(f1==x1 && f1==x2)
            {
                if((f1>y1 &&f1>y2)||(f1<y1 &&f1<y2))
                {
                    sum=abs(x1-x2)+abs(y1-y2);
                    cout<<sum<<"\n";
                }
                else
                {
                    sum=2*(abs(x1-x2)+abs(y1-y2));
                    cout<<sum<<"\n";
                }
            }
        else if(f2==y1 && f2==y2)
            {
                if((f2>x1 &&f2>x2)||(f2<x1 &&f2<x2))
                {
                    sum=abs(x1-x2)+abs(y1-y2);
                    cout<<sum<<"\n";
                }
                else
                {
                    sum=2*(abs(x1-x2)+abs(y1-y2));
                    cout<<sum<<"\n";
                }
            }
    }
    return 0;
}