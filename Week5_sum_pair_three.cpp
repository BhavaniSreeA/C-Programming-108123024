#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,j,k,c=0,v;
	printf("Enter number of characters and a value");
	scanf("%d%d",&n,&v);
	printf("Enter elements of array");
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
				{	
					for(k=0;k<n;k++)
					{
						if(a[i]+a[j]+a[k]==v)
						{
							printf("(%d,%d,%d)\n",a[i],a[j],a[k]);
							printf("True");
							c++;
							exit(0);
						}
					}
				}
		}
		if(c==0)
			printf("No pair exists");
	return 0;	
}
