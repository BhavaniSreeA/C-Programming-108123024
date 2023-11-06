#include<stdio.h>
int main()
{
	int n,i,t;
	printf("Enter a number(even)");
	scanf("%d",&n);
	printf("Enter %d numbers as an input to array",n);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
    	for(i=0;i<n;i=i+2)
	{
			t=a[i];
			a[i]=a[i+1];
	    		a[i+1]=t;
	}
	printf("The elements are\n");
		for(i=0;i<n;i++)
		printf("%d ",a[i]);
    return 0;
}
