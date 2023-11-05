#include<stdio.h>
int main()
{
	int n,i,j,s=0;
	printf("Enter number of rows");
	scanf("%d",&n);
	int a[n][n];
	printf("Enter values of %d*%d Matrix",n,n);
	for(i=0;i<n*n;i++)
		scanf("%d",&a[i]);
		
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j+i==n-1)
				s=s+a[i][j];
		}
	}
	printf("Sum of right diagonal elements is %d",s);
	return 0;
}

