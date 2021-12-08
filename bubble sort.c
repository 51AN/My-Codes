#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int a[n];
    int temp=0;
    for(int i=0;i<n;i++)
        printf("%d",&a[i]);


    for(int i=0;i<n;i++)   // 4 3 2 6 -> 6 4 3 2
    {
        for(int j=i+1;j<n;j++)
        {
          if(a[i]>a[j]) 
          {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
          } 
        }
    }


    return 0;
}