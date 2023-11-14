#include<stdio.h>
int main()
{
	int i,n=0;
	char str[100];
	printf("Enter a string(length<100)");
	scanf("%s",str);
	char copy_str[100];
	for(i=0;str[i]>0;i++)
	copy_str[i]=str[i];
	printf("copy of the string is %s",copy_str);
	return 0;
} 
