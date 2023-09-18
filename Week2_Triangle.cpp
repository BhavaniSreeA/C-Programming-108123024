#include<stdio.h>
int main()
{
float a,b,c;
printf("Enter three sides");
scanf("%f%f%f",&a,&b,&c);
if(a==b&&a==c)
printf("The triangle formed is an equilateral triangle");
else if(a==b||b==c||c==a)
printf("The triangle formed is an isosceles triangle");
else
printf("The triangle formed is a scalene triangle");
return 0;
}
