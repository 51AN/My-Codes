#include <stdio.h>
void func()
{
    char c;
    scanf("%c",&c);

    if(c=='\n')
      return;

    func();

    printf("%c",c);
}

int main()
{
    func();  

    return 0; 
}