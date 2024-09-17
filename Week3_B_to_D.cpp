#include<stdio.h>
#include<math.h>
int main()
{
	int n,a,b=0,c=0;
	printf("Enter a number");
	scanf("%d",&n);
	while(n>0)
		{
		a=n%10;
		n=n/10;
		b=a*pow(2,c)+b;
		c++;
		}
	printf("%d",b);
	return 0;
}
