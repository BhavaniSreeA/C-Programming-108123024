#include<stdio.h>
int main()
{
	int n,i,j,k;
	printf("Enter number of characters of array");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("The duplicate elements are\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[j]==a[i]&&j!=i)
				{
					for(k=i+1;k<n;k++)
					{
					if(a[i]==a[k]&&k!=i)
					printf("%d",a[i]);
					}
				}
			else
			continue;
		}
	}
	return 0;
}
