#include<stdio.h>
int main()
{
	int i,m,n,j;
	char str1[m],str2[n],con[m+n];
	printf("Enter length of string 1\n");
	scanf("%d",&m);
	printf("Enter string 1\n");
	scanf("%s",str1);
	printf("Enter length of string 2\n");
	scanf("%d",&n);
	printf("Enter string 2\n");
	scanf("%s",str2);
	for(i=0;i<m;i++)
	con[i]=str1[i];
	printf("%s\n",con);
	for(j=0;j<n;j++)
	con[m+j]=str2[j];
	printf("The concatenated string is\n");
	printf("%s",con);
	return 0;
}
