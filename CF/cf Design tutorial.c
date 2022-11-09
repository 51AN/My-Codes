#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%2==0){
        printf("8 %d\n",n-8);//you can add 4 here.
    }
    else
        printf("9 %d\n",n-9);
    return 0;
}


