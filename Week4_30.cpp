#include<stdio.h>
int main()
{
	int n,i,j,k,s;
	printf("Enter a number of rows");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		{
		for(s=0;s<i;s++)
			printf(" ");
		printf("*");
		for(k=0;k<2*(n-i-1)-1;k++)
			printf("-");
		if(i!=n-1)
		printf("*");
		printf("\n");
		}
	return 0;
}
