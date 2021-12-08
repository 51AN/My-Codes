#include<stdio.h>
#include<conio.h>

int main()
{
    float c=0,x;

    int i;

    char s[20];

    printf("1. Fahrenheit\n2. Kelvin \n3. Rankine\n4. Reaumer\n");

    printf("\nWhich temperature would you like to input? (Select between 1-4):\n");

    scanf("%d",&i);

    while(i>4||i<1)
    {
        printf("Invalid input!!! Enter again between the given range (1-4)\n");

        printf("\n1. Fahrenheit\n2. Kelvin \n3. Rankine\n4. Reaumer");

        scanf("%d",&i);
    }

    printf("\nNow enter the value:\n");

    scanf("%f",&x);

    if(i==1)
    {
        c=((float)5/9)*(x-32);

        s[20]="Fahrenheit";

    }
    else if(i==2)
    {
        c=x-273.15;
        s[20]="Kelvin";
    }
    else if(i==4)
    {
        c=1.25*x;
        s[20]="Reaumer";
    }
    else
    {
        c=((float)5/9*(x-491.67));
        s[20]="Rankine";
    }


        printf("%s",s);

    printf("\nThe Celsius temperature of %.3f degrees",x);

    if(i==1)
    {


      char s1[20]=" Fahrenheit";

      printf("%s",s1);
    }
    else if(i==2)
    {

    char    s2[20]=" Kelvin";
         printf("%s",s2);
    }
    else if(i==4)
    {

      char  s4[20]=" Reaumer";
         printf("%s",s4);
    }
    else
    {

       char s3[20]=" Rankine";
         printf("%s",s3);
    }


printf(" is : %.3f degrees.",c);

    getch();
    return 0;
}

