#include<stdio.h>
int main()
{
	int n,i,j;
	int a[n][n],b[n][n],c[n][n],d[n][n];
	printf("Enter number of rows");
	scanf("%d",&n);
	printf("Enter values for %d*%d Matrix 1",n,n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		scanf("%d",&a[i][j]);
	}
	printf("Enter values for %d*%d Matrix 2",n,n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		scanf("%d",&b[i][j]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{	
			c[i][j]=a[i][j]+b[i][j];
			d[i][j]=a[i][j]-b[i][j];
		}
	}
	printf("Sum of two matrices is");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		printf("%d ",c[i][j]);
		printf("\n");
	}
	printf("Difference of two matrices is");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		printf("%d ",d[i][j]);
		printf("\n");
	}
	return 0;
}
