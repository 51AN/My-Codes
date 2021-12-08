#include<stdio.h>


int arr[205];


int main()
{

    int q,n,i,k;

    scanf("%d",&q);

    while (q--)
    {
        scanf ("%d",&n);

        for (i=0; i<n; i++)
            scanf ("%d",&arr[i]);

        k = 1;

        for (i=1; i<n; i++)
        {
            if (!(abs(arr[i]-arr[i-1]) == 1 || (arr[i] == 1 && arr[i-1] == n) || (arr[i-1] == 1 && arr[i] == n)))
            {
                k = 0;
                printf("NO\n");
                break;
            }
        }

        if (k)
            printf("YES\n");
    }

    return 0;
}
