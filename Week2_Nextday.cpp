#include<stdio.h>
int main()
{
int d,m,y;
printf("Enter a date,month and year");
scanf("%d%d%d",&d,&m,&y);
if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
{
if(d==31)
{
if(m==12)
printf("The next day is %d %d %d",1,1,y+1);
else
printf("The next day is %d %d %d",1,m+1,y);
}
else if(d>=1&&d<=30)
printf("The next date is %d %d %d",d+1,m,y);
else
printf("Invalid input");
}
else if(m==4||m==6||m==9||m==11)
{
if(d==30)
printf("The next day is %d %d %d",1,m+1,y);
else if(d>=1&&d<=29)
printf("The next day is %d %d %d",d+1,m,y);
else
printf("Invalid input");
}
else if(m==2)
{
if(y%4==0&&(y%400==0||y%100!=0))
{
if(d==29)
printf("The next day is %d %d %d",1,m+1,y);
else if(d>=1&&d<=28)
printf("The next day is %d %d %d",d+1,m,y);
else
printf("Invalid input");
}
else
{
if(d==28)
printf("The next day is %d %d %d",1,m+1,y);
else if(d>=1&&d<=27)
printf("The next day is %d %d %d",d+1,m,y);
else
printf("Invalid input");
}
}
else
printf("Invalid input");
return 0;
}
