#include<stdio.h>
int main()
{
float math,phy,chem,com,eng;
float per;
printf("Enter marks of five subjects");
scanf("%f%f%f%f%f",&math,&phy,&chem,&com,&eng);
per=(math+phy+chem+com+eng)/5;
printf("The percentage of student is %f",per);
}
