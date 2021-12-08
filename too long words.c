#include<stdio.h>
int main()
{

    char c[101];
    scanf("%s",&c);
    int l=strlen(c);


    if(l>10)
    {
      printf("%c%d%c\n",c[0],l-2,c[l-1]);
    }
    else
    printf("%s\n",c);


    return 0;
}
