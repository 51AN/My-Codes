#include<stdio.h>
int main()
{
  int x,y,sum,temp;
  printf("Enter a number:");
  scanf("%d",&x);
  temp=x;//this is so that in the end print statement we can get the x main value to show//
  while(temp!=0)
  {
      y=temp%10;
      sum=sum+(y*y*y);
      temp=temp/10;

  }
      if(sum==x)
        printf("%d is an Armstrong number.",x);
      else
        printf("%d is not an Armstrong number.",x);
  getch();
  return 0;

}

