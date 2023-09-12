#include<stdio.h>
#include<math.h>
int main()
{
float p,r,t,si,ci;
printf("Enter principal,rate and timespan");
scanf("%f%f%f",&p,&r,&t);
si=(p*r*t)/100;
printf("Simple interest is %f",si);
ci=p*pow((1+r/100),t)-p;
printf("Compound interest is %f",ci);
}
