#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter number of rows");
	scanf("%d",&n);
	for(i=0;i<n-1;i++)
		{
		for(j=0;j<2*i+1;j++)
		{
			if(j%2==0)
			printf("%d",i+1);
			else
			printf("*");
		}
		printf("\n");
	    }
	    for(i=0;i<n-1;i++)
		{
		for(j=0;j<2*(n-i-1)-1;j++)
		{
			if(j%2==0)
			printf("%d",n-i-1);
			else
			printf("*");
		}
		printf("\n");
	    }
		return 0;
}
