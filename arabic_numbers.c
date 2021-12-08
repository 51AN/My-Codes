#include<stdio.h>

int main()
{

    int n,x,i,j;
    a:
    printf("\nEnter any number between 0 to 100\n");

    scanf("%d",&n);

    while(n>100||n<0)
    {
        printf("Not within range!\nInput again:\n");

        scanf("%d",&n);
    }

    if(n>=0&&n<=10)
    {
        if(n==0)
            printf("Sifr'");
        if(n==1)
            printf("Ahada");
        if(n==2)
            printf("'Ishnan");
        if(n==3)
            printf("Salasa");
        if(n==4)
            printf("Arba'a");
        if(n==5)
            printf("Khamsa");
        if(n==6)
            printf("Sitta");
        if(n==7)
            printf("Saba'a");
        if(n==8)
            printf("Samaniya");
        if(n==9)
            printf("Tisa 'a");
        if(n==10)
            printf("Ashara");

    }
    else if(n>=11&&n<=20)
    {
        if(n==11)
            printf("Ahada Ashara");
        if(n==12)
            printf("'Ishna Ashara");
        if(n==13)
            printf("Salasa Ashara");
        if(n==14)
            printf("Arba 'a Ashara");
        if(n==15)
            printf("Khamsa Ashara");
        if(n==16)
            printf("Sitta Ashara");
        if(n==17)
            printf("Saba 'a Ashara");
        if(n==18)
            printf("Samaniya Ashara");
        if(n==19)
            printf("Tisa 'a Ashara");
        if(n==20)
            printf("'Ishrun");
    }
    else if(n==30 ||n==40 ||n==50 ||n==60 ||n==70 ||n==80 ||n==90 ||n==100)
    {
        if(n==30)
            printf("Salasun");
        if(n==40)
            printf("Arba 'un");
        if(n==50)
            printf("Khamsun");
        if(n==60)
            printf("Sittun");
        if(n==70)
            printf("Saba 'un");
        if(n==80)
            printf("Samanun");
        if(n==90)
            printf("Tisa 'un");
        if(n==100)
            printf("Mi'a");

    }
    else if(n>=21&&n<=99 && n!=30 && n!=40 && n!=50 && n!=60 && n!=70 && n!=80 && n!=90 )
    {
        if(n%10==1)
            printf("Ahada");
        if(n%10==2)
            printf("'Ishna");
        if(n%10==3)
            printf("Salasa");
        if(n%10==4)
            printf("Arba 'a");
        if(n%10==5)
            printf("Khamsa");
        if(n%10==6)
            printf("Sitta");
        if(n%10==7)
            printf("Sab 'a");
        if(n%10==8)
            printf("Samaniya");
        if(n%10==9)
            printf("Tisa 'a");
        printf(" wa ");
        if(n/10==2)
            printf("'ishrun");

        if(n/10==3)
            printf("Salasun");
        if(n/10==4)
            printf("Arba 'un");
        if(n/10==5)
            printf("Khamsun");
        if(n/10==6)
            printf("Sittun");
        if(n/10==7)
            printf("Saba 'un");
        if(n/10==8)
            printf("Samanun");
        if(n/10==9)
            printf("Tisa 'un");


    }
    goto a;




    return 0;
}
