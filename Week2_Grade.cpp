#include<stdio.h>
int main()
{
float m,p,c,cs,eng,per;
char Grade;
printf("Enter marks of five subjects");
scanf("%f%f%f%f%f",&m,&p,&c,&cs,&eng);
per=(m+p+c+cs+eng)/5;
if(per>=90)
Grade='A';
else if(per>=80)
Grade='B';
else if(per>=70)
Grade='C';
else if(per>=60)
Grade='D';
else if(per>=40)
Grade='E';
else
Grade='F';
printf("The percentage and grade is %f\n%c",per,Grade);
return 0;
}
