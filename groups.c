//C code to show how many students are in Group A and Group B
#include<stdio.h>
#include<conio.h>
int main()
{
    int x,i=0,j=0,countb=0,counta=0;
    printf("Enter how many students:");
    scanf("%d",&x);
    while(x>65||x<1)
    {
        printf("Student number cannot be greater than 65 or less than 1 people. Enter again:\n");
        scanf("%d",&x);
    }

    printf("Enter the rolls of the aforementioned %d students(Roll should be in this range:(101-170)):\n",x);

    for(i=1;i<=x;i++)
    {
        printf("%d = ",i);
        scanf("%d",&j);
        while(j<101||j>170)
        {
            printf("The roll is not within range! Input it again:\n");
            printf("%d = ",i);
            scanf("%d",&j);
        }
        if(j%2==0)
        {
            countb++;
        }
        else if(j%2!=0)
        {
            counta++;
        }
        printf("\n");

    }
printf("%d students are in Group A(Odd number)\n\n",counta);
printf("%d students are in Group B(Even number)",countb);


    getch();
    return 0;
}
