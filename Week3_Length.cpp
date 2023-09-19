#include<stdio.h>
int main()
{
int a=0,n;
printf("Enter a number");
scanf("%d",&n);
while(n>0)
{
n=n/10;
a++;
}
printf("The length of number is %d",a);
return 0;
}
