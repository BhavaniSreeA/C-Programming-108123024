#include<stdio.h>
int main()
{
	int n,k,i,j;
	printf("Enter number of rows and starting integer");
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++,k++)
	{
		for(j=0;j<i+1;j++)
			printf("%d",k);
		printf("\n");
	}
	for(i=0;i<=n;i++,k--)
	{
		for(j=0;j<n-i;j++)
			printf("%d",k-1);
		printf("\n");
	}
	return 0;
}
