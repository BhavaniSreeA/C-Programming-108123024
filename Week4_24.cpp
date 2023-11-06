#include<stdio.h>
int main()
{
	int n,i,p,q,r,s,k=1;
	printf("Enter number of rows");
	scanf("%d",&n);
	printf("The spiral matrix is\n");
	int a[n][n];
	for(i=0;i<(n+1)/2;i++)
	{
		for(p=i;p<n-i;p++)
		a[i][p]=k++;
		for(q=i+1;q<n-i;q++)
		a[q][n-i-1]=k++;
		for(r=n-i-2;r>=i;r--)
		a[n-i-1][r]=k++;
		for(s=n-i-2;s>i;s--)
		a[s][i]=k++;
	}
	for(p=0;p<n;p++)
	{
		for(q=0;q<n;q++)
		printf("%d ",a[p][q]);
		printf("\n");
	}
	return 0;
}
