#include<stdio.h>
int main()
{
	int n,i,m,s=0,k=0,l;
	printf("Enter number of characters of array 1 and array 2\n");
	scanf("%d\n%d",&n,&m);
	int a[n],b[m];
	printf("Enter inputs of array 1\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter inputs of array 2\n");
	for(i=0;i<m;i++)
		scanf("%d",&b[i]);
	for(i=0;i<n;i++)
		s=s*10+a[i];
	for(i=0;i<m;i++)
		k=k*10+b[i];
	l=s+k;
	printf("sum of two array is %d",l);
	return 0;
}
