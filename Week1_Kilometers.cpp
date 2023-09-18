#include<stdio.h>
int main()
{
int km,m,cm,mm;
printf("Enter a value in km");
scanf("%d",&km);
m=1000*km;
cm=100*m;
mm=10*cm;
printf("The value in m is %d",m);
printf("The value in cm is %d",cm);
printf("The value in mm is %d",mm);
return 0;
}
