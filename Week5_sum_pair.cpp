#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,j,k,c=0;
	printf("Enter number of characters and a value");
	scanf("%d%d",&n,&k);
	printf("Enter elements of array");
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
				{
					if(a[i]+a[j]==k)
					{
						printf("(%d,%d)\n",a[i],a[j]);
						printf("True");
						c++;
						exit(0);
					}
				}
		}
		if(c==0)
				printf("No pair exists");
	return 0;	
} 
