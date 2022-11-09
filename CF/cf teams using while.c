#include<stdio.h>
int main()
{
    int n,a,b,c,sum=0,i=0;

    scanf("%d",&n);
    while(n>0)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(a==1) i++;
        if(b==1) i++;
        if(c==1) i++;

        if(i>=2) sum++;
        i=0;
        n--;
    }
    printf("%d",sum);



    return 0;
}
