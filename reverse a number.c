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
      sum=sum*10+y;
      temp=temp/10;

  }
    printf("The reverse of %d is %d",x,sum);
  getch();
  return 0;

}

