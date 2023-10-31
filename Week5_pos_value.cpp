#include<stdio.h>
int main()
{
	int n,i,v,p,t;
	printf("Enter number of characters of array");
	scanf("%d",&n);
	int a[n+1];
	printf("Enter inputs of array");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter a value and position");
	scanf("%d%d",&v,&p);
	for(i=n;i>p-1;i--)	
		a[i]=a[i-1];
	a[p-1]=v;
	for(i=0;i<n+1;i++)
	printf("%d",a[i]);
	return 0;
}
