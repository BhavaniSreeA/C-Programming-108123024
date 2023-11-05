#include<stdio.h>
int main()
{
	int n,i,j,c=0;
	printf("Enter number of characters of array");
	scanf("%d",&n);
	int a[n];
	printf("Enter inputs of array\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]==a[j])
			c++;
		}
		printf("frequency of %d is %d",a[i],c);
		c=0;
	}
	return 0;
}
