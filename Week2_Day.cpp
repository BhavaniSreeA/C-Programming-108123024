#include<stdio.h>
int main()
{
int a;
char day;
printf("Enter a day number(1-7)");
scanf("%d",&a);
if(a==1)
printf("The day is Monday");
else if(a==2)
printf("The day is Tuesday");
else if(a==3)
printf("The day is Wednesday");
else if(a==4)
printf("The day is Thursday");
else if(a==5)
printf("The day is Friday");
else if(a==6)
printf("The day is Saturday");
else
printf("The day is Sunday");
return 0;
}
