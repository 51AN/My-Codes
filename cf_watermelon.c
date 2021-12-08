#include <stdio.h>
int main()
{
  int n, i = 7, count, c;
  int k=1;
  long long int a[200001];

 n=100000;

 

  for (count = 2; count <= n;)
  {
    for (c = 2; c <= i - 1; c++)
    {
      if (i%c == 0)
        break;
    }
    if (c == i)
    {
        
        
        a[k]=i;
        k++;
        count++;


    }
    i++;

  }
 

 long long int serial=2,flag=0,r;
 for(r=2;serial<=1500;r++)
 {
     if(r%2==0 || r%3==0 || r%5==0)
     {
     flag=0;
     for(int g=1;a[g]<=r;g++)
        {
            if(r%a[g]==0)
                {
                    flag=1;
                    break;
                }

            
        }
        if(flag==0)
        {
            printf("%lld : %lld\n",serial,r);
            serial++;
        }
     }
    
 }

  return 0;
}