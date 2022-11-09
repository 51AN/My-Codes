#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a;
        int len = a.length();
        for(int i=0;i<(len-1);i++)//last one stays untouched.
        {
            if(i==0)
                b+=a[i];
            if(a[i]==a[i-1])
                {
                b+=a[i];
                i++;//this line is very important.
                }
        }

            b+=a[len-1];//adding the last element.
            
            cout<<b<<"\n";

    }


    return 0;
}