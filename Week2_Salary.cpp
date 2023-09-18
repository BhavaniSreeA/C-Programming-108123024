#include<stdio.h>
int main()
{
int rg;
float bs,hra,da,salary;
printf("Enter basic salary and regional number");
scanf("%f%d",&bs,&rg);
da=0.48*bs;
if(rg==1)
hra=0.27*bs;
else if(rg==2)
hra=0.24*bs;
else if(rg==3)
hra=0.16*bs;
else
hra=0.12*bs;
salary=bs+da+hra;
printf("The total salary is %f",salary);
return 0;
}
