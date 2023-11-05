#include<stdio.h>
int main()
{
	int n,i,j,k,c=0;
	printf("Enter number of characters of array");
	scanf("%d",&n);
	int a[n];
	printf("Enter inputs of sorted array");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0,k=0;i<n;i++)
	{
		for(j=i+1;j<n;j++);
		{
			if(a[i]==a[j])
				k++;
		}
		if(k==0&&(a[i]>0||a[i]==0))
			c++;	
	}
	printf("Number of distinct elements is %d",c);
	return 0;
}
