#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter length");
	scanf("%d",&n);
	char ch[n];
	printf("Enter a string");
	scanf("%s",ch);
	for(i=0;i<n;i++)
	{
		if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u')
		printf("%c ",ch[i]);
	}
	return 0;
} 

