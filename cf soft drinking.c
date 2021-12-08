#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,l,c,d,p,nl,np;

    scanf("%d %d %d %d %d %d %d %d",&n,&k,&l,&c,&d,&p,&nl,&np);

    int i=0,j=0,k=0;

    i= k*l;
    j= c*d;
    k= i/n;

    int ans=0;

    ans=min(i,j,k);

    printf("%d",ans);

    return 0;
}
