#include<stdio.h>

int main(){
    int n,x,cnt=0,a;
    scanf("%d %d",&n,&x);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        cnt+=(a+1);
    }
    cnt=cnt-1;

    if(x==cnt)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

return 0;
}
