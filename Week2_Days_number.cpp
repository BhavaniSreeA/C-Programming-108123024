#include<stdio.h>
int main()
{
int year,month,nd;
printf("Enter year and month number");
scanf("%d%d",&year,&month);
if(month==2)
{
if(year%4==0&&(year%400==0||year%100!=0))
nd=29;
else
nd=28;
}
else if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
nd=31;
else if(month==4||month==6||month==9||month==11)
nd=30;
else
printf("Invalid input");
printf("The number of days is %d",nd);
return 0;
}
