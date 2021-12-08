#include <stdio.h>
    int main()
    {

        int i, j, x, n,cnt=0;

        scanf("%d", &n);
        int number[n];
        int number2[n];

        for (i = 0; i < n; ++i)
        {
            scanf("%d", &number[i]);
        }
        for (i = 0; i < n; ++i)
        {
            number2[i]=number[i];
        }

        for (i = 0; i < n; ++i)
        {

            for (j = i + 1; j < n; ++j)
            {

                if (number[i] > number[j])
                {

                    x =  number[i];
                    number[i] = number[j];
                    number[j] = x;

                }

            }

        }
        for (i = 0; i < n; ++i)
        {
            if(number2[i]!=number[i])
                cnt++;
        }


    if(cnt>2)
        printf("NO\n");
    else
        printf("YES\n");

    return 0;
    }
