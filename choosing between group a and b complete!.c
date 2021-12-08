//C code to show how many students are in Group A and Group B
#include<stdio.h>
#include<conio.h>
int main()
{
    int x,n=0,i=0,j=0,countb=0,counta=0,a[200];
    printf("Enter how many students:");
    scanf("%d",&x);
    //if input outside range
    while(x>65||x<1)
    {
        printf("Student number cannot be greater than 65 or less than 1 people. \nEnter again:\n");
        scanf("%d",&x);
    }

    printf("Enter the rolls of the aforementioned %d students(Roll should be in this range:(101-170)):\n",x);


    for(i=1;i<=x;i++)
{
    printf("%d = ",i);
    scanf("%d",&a[i]);//taking input in array
            while(a[i]<101||a[i]>170)//if value is outside range
        {
            printf("The roll is not within range! Input it again:\n");
            printf("%d = ",i);
            scanf("%d",&a[i]);
        }
        if(i!=1)//if it is the first array(should've been zero, but too lazy now)
{


    n=i;
    for(i=1;i<n;i++)
    {
        while(a[i]==a[n])//if there is same roll input
        {
            printf("The roll you have entered matches with %d number roll, Input again:\n",i);
                        printf("%d = ",n);
            scanf("%d",&a[n]);
            while(a[n]<101||a[n]>170)//repeating, notice how I am using n now instead of i
        {
            printf("The roll is not within range! Input it again:\n");
            printf("%d = ",n);
            scanf("%d",&a[n]);
        }

        }
    }
}

}
for(i=1;i<=x;i++)
{
            if(a[i]%2==0)
        {
            countb++;
        }
}
for(i=1;i<=x;i++)
{
    if(a[i]%2!=0)
    {
        counta++;
    }
}

printf("\n%d students are in Group A(Odd number)\n\nThe students are:\n",counta);
for(i=1;i<=x;i++)//printing the arrays to indicate inputed roll number students
    {
           if(a[i]%2!=0)
           {
               printf("%d\n",a[i]);
           }

    }
printf("\n%d students are in Group B(Even number)\n\nThe students are:\n",countb);
for(i=1;i<=x;i++)//repeating
    {
           if(a[i]%2==0)
           {
               printf("%d\n",a[i]);
           }

    }


    getch();
    return 0;
}

