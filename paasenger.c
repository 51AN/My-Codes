#include<stdio.h>
int main()
{

    int x;
    while(1)
    {
        scanf("%d",&x);
        if(x>1)
        {
            printf("1/2\n");
        }
        else if(x==1)
        {
            printf("0/1\n");
        }
        else if(x==0)
        {
            return 0;
        }
    }


}
