#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int cnt10=0;

        long long int min=0;

        cnt10=n/10;
        n=n%10;
    

        if(n==9)
        min=min+45;

        if(n==8)
        min+=20;

        if(n==7)
        min+=30;
        if(n<=6)
        min+=15;

        min+=(cnt10*25);
        cout<<min<<endl;

    }
    return 0;


}