#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter number of rows");
	scanf("%d",&n);
	int a[n][n];
	printf("Enter values for %d*%d matrix",n,n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		scanf("%d",&a[i][j]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		printf("%d ",a[j][i]);
		printf("\n");
	}
	return 0;
}
