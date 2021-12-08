/**
 * C program to check whether a number is Strong Number or not
 */

#include <stdio.h>

int main()
{
  long long int n, i = 7, count, c;
  int k=1;
  long long int a[200000];

 n=20000;

 

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
  for(int g=1;g<n;g++)
    printf("%d\n",a[g]);

    return 0;
}
