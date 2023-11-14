#include<stdio.h>
int main()
{
	int n,i,c=0;
	printf("Enter a number");
	scanf("%d",&n);
	char ch[n];
	printf("Enter an array(upper case)");
	scanf("%s",ch);
	for(i=0;i<n;i++)
	ch[i]=32+ch[i];
	printf("%s",ch);
	return 0;
}
