#include <stdio.h>

void func(int a)
{
   if(a==0)
      return;

      printf("%d ",a);

      func(a-1);
      
      printf("%d ",a);
}


int main()
{
   
   func(4);
   return 0;
}