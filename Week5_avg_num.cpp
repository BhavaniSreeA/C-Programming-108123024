#include<stdio.h>
int main()
{
	int n,i,j,k,x,c;
	printf("Enter number of characters of array and a number");
	scanf("%d%d",&n,&x);
	int a[n],t[n];
	printf("Enter inputs of array");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0,c=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			k=(a[i]+x)/2;
			if(a[j]==k)
				c++;
		}
		t[i]=c;
	}
	for(i=0;i<n;i++)
	printf("%d",t[i]);
	return 0;
}
