#include<stdio.h>
int main()
{
	int n,i,j,c=0;
	printf("Enter number of characters of array");
	scanf("%d",&n);
	int a[n],t[n];
	printf("Enter inputs of array\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		t[i]=a[i];
		a[2]=5;
	for(i=0;i<n;i++)
	printf("%d",t[i]);
	return 0;
}
