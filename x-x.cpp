
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[107],min;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    sort(a+1,a+n+1);
    min=a[1];
    for(int i=1;i<=n;i++)
    {
        if(a[i]!=min)
        {
            printf("%d\n",a[i]);
            return 0;
        }
    }
    printf("NO\n");
    return 0;
}
