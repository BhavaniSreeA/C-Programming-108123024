#include<stdio.h>
int main()
{
int ld,n,fd ;
printf("Enter a number");
scanf("%d",&n);
ld=n%10;
while(n>=10)
n=n/10;
fd=n%10;
printf("The sum of first and last digit is %d",ld+fd);
return 0;
}
