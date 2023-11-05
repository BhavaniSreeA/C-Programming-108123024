#include<stdio.h>
int main()
{
	int n,i,j,k=0,s=0;
	printf("Enter number of characters of array(even)");
	scanf("%d",&n);
	int a[n];
	printf("Enter inputs of array\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
    for(i=0;i<n/2;i++)
	s=s+a[i];
	for(i=n/2;i<n;i++)
	k=k+a[i];
	if(k>s)
	printf("The number to be added is %d",k-s);
	else
	printf("The number to be added is %d",s-k);
	return 0;
}
