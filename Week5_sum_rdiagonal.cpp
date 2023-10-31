#include<stdio.h>
int main()
{
	int n,i,j,s=0;
	printf("Enter number of rows");
	scanf("%d",&n);
	int a[n][n];
	printf("Enter diagonal element values of %d*%d Matrix",n,n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i][i]);
		s=s+a[i][i];
	}
	printf("Sum of right diagonal elements is %d",s);
	return 0;
}
