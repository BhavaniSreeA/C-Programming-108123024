#include<stdio.h>
int main()
{
	int n,i,j,k;
	printf("Enter number of characters of array");
	scanf("%d",&n);
	int a[n];
	printf("Enter inputs of array");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0,k=0;i<n;i++)
	{
		for(j=0;j<n;j++);
		{
			if(a[i]!=a[j])
				k++;
		}
		if(k==n-1)
		{
			printf("The first non repeating element is %d",a[i]);
			break;	
		}
	}
	return 0;
}
