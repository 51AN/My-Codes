#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%2==1)
    {
        printf("-1\n");
    }
    else
    {
        int i, a[n+1];
        for(i=1;i<=n;i++)
        {
            if(i%2==1)
            {
                a[i]=i+1;
            }
            else
            {
                a[i]=i-1;
            }
        }
        for(i=1;i<n;i++)
        {
            printf("%d ",a[i]);
        }
        cout << a[i] << endl;
    }
    return 0;
}
