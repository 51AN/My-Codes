#include <stdio.h>
int main()
{
    int k,d;
    scanf("%d %d",&k,&d);
    if(d==0 && k==1)
        {
        printf("%d",d);
        }
    else if(d!=0 && k!=0)
        {
        printf("%d",d);
    for(int i=0; i<k-1;i++)
            {
            printf("0");
            }
        }
    else if(d ==0 && k!=1)
        {
        printf("No solution");
        }
    return 0;
}
