#include<stdio.h>
int main()
{
int a,n,s=0;
printf("Enter a number");
scanf("%d",&n);
while(n>0)
{
a=n%10;
n=n/10;
s=s*10+a;
}
printf("The reverse of the number is %d",s);
return 0;
}
