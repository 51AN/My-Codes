#include<stdio.h>
int main()
{
    int n, x=0;
    scanf("%d",&n);

    char s[5];
    while (n--)
    {
        scanf("%s",&s[n]);
        if (s[1] == '+')
        {
            ++x;
        }
        else
        {
            --x;
        }
    }

    printf("%d",x);
    return 0;
}
