#include<stdio.h>
int  main()
{
int a,b,c;
printf("Enter points for 3 techniques");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
printf("The best technique is %d",a);
else if(b>c)
printf("The best technique is %d",b);
else
printf("The best technique is %d",c);
return 0;
}

