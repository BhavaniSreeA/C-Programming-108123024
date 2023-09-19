#include<stdio.h>
int main()
{
int a,n,s=0;
printf("Enter a number");
scanf("%d",&n);
while(n>0)
{
a=n%10;
s=s+a;
n=n/10;
}
printf("The sum of digits is %d",s);
return 0;
}
