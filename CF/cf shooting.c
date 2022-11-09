#include <stdio.h>
int main()
{
	int n,p,ans=0,j=-1,min,max;
	scanf("%d",&n);
	int a[n],i,b[n];
	for(i=0;i<n;i++)
        scanf("%d",&a[i]);
	min=a[n-1];
	for (i=n-2;i>=0;i--)
	{
	if(a[i]<min)
	min=a[i];
	}	//Find the smallest one
	max=min;
	for (j=0;j<n;j++)
	{
		for(i=0;i<n;i++)
		{
			if(a[i]>=max)
			{
				max=a[i];//Find the biggest one
				p=i;//p is the serial number of the current largest one,
			}

		}

		ans+=(j*max+1);//j is the order of shooting,
		a[p]=0;//Change the current largest to 0,
		b[j]=p;// The b array stores the original serial numbers of the shot jars.
		max=min;//Reset max,

	}
	printf("%d\n",ans);
	for (i=0;i<n;i++)
	printf("%d ",b[i]+1);

	return 0;
}
