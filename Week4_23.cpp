#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter a number");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n+2;j++)
		{
			if(i%2==0)
			{
				if(j==n+1)
				printf("%d",i+2);
				else
				printf("%d",i+1);
			}
			else
			{
				if(j==0)
				printf("%d",i+2);
				else
				printf("%d",i+1);
			}
		}
		printf("\n");
	}
	return 0;
}
