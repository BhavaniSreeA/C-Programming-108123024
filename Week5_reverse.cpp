#include<stdio.h>
int main()
{
	int n,i,t,p,q;
	printf("Enter a number");
	scanf("%d",&n);
	printf("Enter %d numbers as an input to array",n);
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
    	for(p=0,q=n-1;p<n/2;p++,q--)
	{
			t=a[p];
			a[p]=a[q];
	    		a[q]=t;
	}
	printf("The reverse of the sequence is\n");
		for(i=0;i<n;i++)
		printf("%d ",a[i]);
    return 0;
}
