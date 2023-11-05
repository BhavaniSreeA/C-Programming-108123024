#include<stdio.h>
int main()
{
	int i,a[i],n,min,max,sum=0;
	printf("Enter a number");
	scanf("%d",&n);
	printf("Enter %d numbers as an input to array",n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	sum=sum+a[i];
    }
    printf("The Average of numbers is %d\n",sum/n);
    min=max=a[0];
    for(i=1;i<n;i++)
    {
    	if(a[i]<min)
    	min=a[i];
    	if(a[i]>max)
    	max=a[i];
	}
	printf("The Minimum of numbers is %d\n",min);
	printf("The Maximum of numbers is %d\n",max);
	return 0;
}
