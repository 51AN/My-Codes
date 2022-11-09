#include<stdio.h>

int main()
{
    int n,i,j,l=0,cnt=0,x=0,y=0,a[100001],s[100001];

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<=a[i+1])
        {
          cnt++;
        }
        else if(a[i]>a[i+1])
        {
            x=cnt+1;
            l++;
            for(j=l-1;j<l;j++)
            {
                s[j]=x;
            }
            x=0;
            cnt=0;
        }
    }
    for (i = 0; i < l; ++i)
        {

            for (j = i + 1; j < l; ++j)
            {

                if (s[i] > s[j])
                {

                    y =  s[i];
                    s[i] = s[j];
                    s[j] = y;

                }

            }

        }




    printf("%d",s[l-1]);



    return 0;
}
