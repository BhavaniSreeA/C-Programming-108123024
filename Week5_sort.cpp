#include<stdio.h>
int main()
{
	int n,i,j,t;
	printf("Enter a number");
	scanf("%d",&n);
	printf("Enter %d numbers as an input to array",n);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
    	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			 if(a[j]>a[j+1])
		    {
				t=a[j];
		    	a[j]=a[j+1];
		    	a[j+1]=t;
			}
		}
	}
	printf("The numbers in ascending order is \n");
		for(j=0;j<n;j++)
		printf("%d ",a[j]);
    return 0;
}
