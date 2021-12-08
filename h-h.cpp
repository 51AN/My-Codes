#include <stdio.h>

int main()
{
    int n,m,x=0,i,j;
	scanf("%d %d",&n,&m);

	for(i=1 ; i<=n ; i++)
    {
		for(int j=1 ; j<=m ; j++)
		{
			int y;
			scanf("%d",&y);
			if(y==1)
			{
				if(i==1||j==1||i==n||j==m)
				x = 1;
			}
		}
	}
	if(x)
        printf("2");
	else
        printf("4");
	return 0;
}
