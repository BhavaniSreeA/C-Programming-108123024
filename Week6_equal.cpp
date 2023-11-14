#include<stdio.h>
int main()
{
	int n,i,c=0;
	printf("Enter a number");
	scanf("%d",&n);
	char ch[n],r[n];
	printf("Enter an array");
	scanf("%s",ch);
	printf("Enter array2");
	scanf("%s",r);
	for(i=0;i<n;i++)
	{
		if(ch[i]==r[i])
		c++;
	}
	if(c==n)
	printf("Equal");
	else
	printf("Not equal");
	return 0;
} 
