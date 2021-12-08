#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
bool prime(int n)
{   
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
int main()
{

int n;
scanf("%d",&n);
if(prime(n))
    printf("YES");
else
    printf("NO");
 
}

    