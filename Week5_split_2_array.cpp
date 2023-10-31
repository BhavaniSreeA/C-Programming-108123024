#include<stdio.h>
int main()
{
	int n,i,j=0,k=0;
	printf("Enter number of characters of array");
	scanf("%d",&n);
	int a[n],b[n],c[n];
	printf("Enter inputs of array");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			b[j]=a[i];
			j++;
		}
		else
		{
			c[k]=a[i];
			k++;	
		}
	}
	for(i=0;i<n;i++)
	printf("%d",a[i]);
	printf("\n");
	for(i=0;i<j;i++)
	printf("%d",b[i]);
	printf("\n");
	for(i=0;i<k;i++)
	printf("%d",c[i]);
	printf("\n");
	return 0;
}
	
	
