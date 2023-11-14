#include<stdio.h>
int main()
{
	int n,i,c=0;
	printf("Enter a number");
	scanf("%d",&n);
	char ch[n],r[n];
	printf("Enter a string");
	scanf("%s",ch);
	for(i=0;i<n;i++)
	{
		if(ch[n-i-1]==ch[i])
		c++;
	}
	if(c==n)
	printf("Palindrome");
	return 0;
}
