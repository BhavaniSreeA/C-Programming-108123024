#include<stdio.h>
int main()
{
int i,n,s,a=0,b=1;
printf("Enter a number");
scanf("%d",&n);
for(i=2;i<n;i++)
{
s=a+b;
a=b;
b=s;
}
printf("The fibonacci number is %d",s);
return 0;
}
