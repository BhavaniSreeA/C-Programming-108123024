#include<stdio.h>
int main()
{
	int n,i,j,t,k;
	printf("Enter number of characters and k ");
	scanf("%d%d",&n,&k);
	printf("Enter %d numbers as an input to array",n);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
    	for(i=0;i<n;i++)
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
	printf("The kth largest and kth smallest number are %d and %d\n",a[n-k],a[k-1]);
    	return 0;
}
