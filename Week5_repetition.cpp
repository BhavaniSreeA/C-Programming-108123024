#include<stdio.h>
int main()
{
	int n,i,j,t,c,k;
	printf("Enter number of characters and a number");
	scanf("%d%d",&n,&k);
	printf("Enter %d numbers as an input to array",n);
	int a[n];
	for(i=0,c=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]==k)
			c++;
	}
	printf("There are %d %d's present\n",c,k);
    return 0;
}
