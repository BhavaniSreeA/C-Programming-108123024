#include<stdio.h>
int main()
{
int a,n,s=1;
printf("Enter a number");
scanf("%d",&n);
for(a=1;a<=n;a++)
s=s*a;
printf("The factorial of %d is %d",n,s);
return 0;
}
