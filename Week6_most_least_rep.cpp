#include<stdio.h>
int main()
{
	int n,i,j,c=0;
	printf("Enter length");
	scanf("%d",&n);
	int max=0,min=n,max_index=0,min_index=0;
	char ch[n];
	printf("Enter a string");
	scanf("%s",ch);
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(ch[i]==ch[j])
			c++;
		}
		if(c>max)
		{
			max=c;
			max_index=i;
		}
		if(c<min)
		{
			min=c;
			min_index=i;
		}
	}
	printf("Most repeated is %c repeated for %d times",ch[max_index],max);
	printf("Least repeated is %c repeated for %d times",ch[min_index],min);
	return 0;
}
