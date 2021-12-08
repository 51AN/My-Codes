#include<stdio.h>
int main()
{
    char x;

    printf("Enter a single letter:");
    scanf("%c",&x);

    if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u')
    {
        printf("The letter is vowel.");

    }
    else{
        printf("The letter is consonant.");
    }
    getch();
    return 0;
}
