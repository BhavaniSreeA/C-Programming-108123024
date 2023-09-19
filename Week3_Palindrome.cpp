#include<stdio.h>
int main()
{
int a,n,k,s=0;
printf("Enter a number");
scanf("%d",&n);
k=n;
while(n>0)
{
a=n%10;
n=n/10;
s=s*10+a;
}
if(k==s)
printf("The number is a palindrome");
else
printf("The number is not a palindrome");
return 0;
}
