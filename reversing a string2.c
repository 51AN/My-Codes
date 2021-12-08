#include<stdio.h>
int main()
{
    char strFirst[20] = "I am Human";
    char strSecond[20] ;
    int  length=0, j;

    while (strFirst[length] != '\0' )
    {
        length++;
    }

    for(j=0; length>=0; length--, j++)
    {
        strSecond[j] = strFirst[length-1];
    }

    printf("first string : %s \n", strFirst);
    printf("Reverse string : %s", strSecond);
    return 0;
}
