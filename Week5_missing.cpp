#include<stdio.h>
int main()
{
	int n,i,j,s=0,k;
	printf("Enter number of characters");
	scanf("%d",&n);
	int a[n];
	printf("Enter %d numbers as an input to array",n);
	for(i=0;i<n;i++)
    {
	    scanf("%d",&a[i]);
		s=s+a[i];
	}
	k=n*(n+1)/2;
	printf("The missing number is %d",k-s);
    return 0;
}
