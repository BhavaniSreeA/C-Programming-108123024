#include<stdio.h>
int main()
{
	int n,i,j,k;
	printf("Enter number of rows");
	scanf("%d",&n);
	k=1;
	for(i=0;i<=n;i++)
	{
		for(j=0;j<n-i;j++,k++)
			printf("%d ",k);
		printf("\n");
	}
	return 0;
}
