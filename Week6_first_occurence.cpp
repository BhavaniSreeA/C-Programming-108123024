#include<stdio.h>
int main()
{
	int i,n;
	char v;
	printf("Enter character");
	scanf("%c",&v);
	printf("Enter length");
	scanf("%d",&n);
	char str[n];
	printf("Enter string");
	scanf("%s",str);
	for(i=0;i<n;i++)
	{
		if(str[i]==v)
		{
			printf("The first occurence is %d",i+1);
			break;
		}
	}
	return 0;
} 

