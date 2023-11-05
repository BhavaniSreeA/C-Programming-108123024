#include<stdio.h>
int main()
{
	int n,i,k;
	printf("Enter number of values in array and a number");
	scanf("%d%d",&n,&k);
	int a[n];
	printf("Enter values of array in ascending order");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]>k|a[i]==k)
		{
			printf("ceil of %d is %d",k,a[i]);
			break;	
		}
	}
	return 0;
}

