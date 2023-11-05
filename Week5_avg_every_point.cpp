#include<stdio.h>
int main()
{
	int n,i,j,k,s=0,c=0;
	printf("Enter number of characters of array");
	scanf("%d",&n);
	int a[n],t[n];
	printf("Enter inputs of array\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		c++;
		s=s+a[i];
		t[i]=s/c;
	}
	for(i=0;i<n;i++)
	printf("%d ",t[i]);
	return 0;
}
