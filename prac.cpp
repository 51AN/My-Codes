#include<bits/stdc++.h>
using namespace std;

int eggs(int x)
{
    if(x==1)
        return 1;
    return x + eggs(x-1);

}

int main()
{
    int n;
    cin>>n;
    cout<<eggs(n);
}