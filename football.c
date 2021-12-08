#include<stdio.h>
#include<string.h>
int main()
{
    int i,cnt0=0,cnt1=0;
    char a[101];
    scanf("%s",&a[i]);
    int l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(a[i]==0&&a[i]==a[i+1])
        {
            cnt0++;
        }
        else if(a[i]==1&&a[i]==a[i+1])
        {
            cnt1++;
        }
    }

    if(cnt1>6||cnt0>6)
    {
        printf("YES");

    }
    else
        printf("NO");
        printf("\n%d  %d",cnt0,cnt1);

    return 0;
}

