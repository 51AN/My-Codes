#include<stdio.h>
int main()
{
  int x,y,sum=0,temp;
  printf("Enter a number:");
  scanf("%d",&x);
  temp=x;//this is so that in the end print statement we can get the x main value to show//
  while(temp!=0)
  {
      y=temp%10;
      sum=sum*10+y;
      temp=temp/10;

  }
  if(sum==x)
  {
      printf("%d is a palindrome number.",x);

  }
  else
    printf("%d is not a palindrome number.",x);

  getch();
  return 0;

}

