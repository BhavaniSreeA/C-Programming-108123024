#include<stdio.h>
int main()
{
	int n,i,j,s;
	printf("Enter a number");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(s=0;s<n-i-1;s++)
		printf(" ");
		for(j=0;j<n;j++)
		printf("* ");
		printf("\n");		
	}
	return 0;
} 
