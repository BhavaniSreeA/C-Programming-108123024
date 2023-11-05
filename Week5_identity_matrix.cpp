#include<stdio.h>
int main()
{
	int n,i,j,c;
	printf("Enter number of rows");
	scanf("%d",&n);
	int a[n][n];
	printf("Enter values for Matrix");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	}
	for(i=0;i<n;i++)
	{ 
		for(j=0;j<n;j++)
		{
			if(a[i][i]==1||(a[i][j]=0&&i!=j))
				c++;
		}
	}
	if(c>0)
	printf("An Identity Matrix");
	return 0;
}
