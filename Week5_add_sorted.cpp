#include<stdio.h>
int main()
{
	int n,i,j,v,t;
	printf("Enter number of characters of array and a value");
	scanf("%d%d",&n,&v);
	int a[n+1];
	printf("Enter inputs of sorted array\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]>v)
		{
			t=i;
			printf("%d\n",t);
			for(j=n-1;j>i-1;j--)
			a[j+1]=a[j];
			break;
		}
	}
	a[t]=v;
	for(i=0;i<n+1;i++)
	printf("%d",a[i]);
	return 0;
}
	
	
	
