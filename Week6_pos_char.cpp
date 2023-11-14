#include<stdio.h>
int main()
{
	int n,i,pos;
	char v;
	printf("Enter character to be inserted");
	scanf("%c",&v);
	printf("Enter length and position");
	scanf("%d %d",&n,&pos);
	char ch[n+1];
	printf("Enter a string\n");
	scanf("%s",ch);
	for(i=n;i>pos-1;i--)
	{
		ch[i]=ch[i-1];
	}
	ch[pos-1]=v;
	printf("Modified string\n");
	printf("%s",ch);
	return 0;
} 
