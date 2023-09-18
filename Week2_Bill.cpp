#include<stdio.h>
int main()
{
int units,sc,cpu,Amount;
printf("Enter number of units used");
scanf("%d",&units);
if(units<100)
cpu=4.8,sc=75;
else if(101<units<500)
cpu=5.5,sc=120;
else(units>500);
cpu=6,sc=150;
Amount=(cpu*units)+sc;
printf("The value of electricity bill is %d",Amount);
return 0;
}
