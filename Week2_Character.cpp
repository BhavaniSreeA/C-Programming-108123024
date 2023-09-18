#include<stdio.h>
int main()
{
char ch;
printf("Enter a character");
scanf("%c",&ch);
if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
printf("The character entered is a letter");
else if(ch>='0'&&ch<='9')
printf("The character entered is a digit");
else
printf("The character entered is a special character");
return 0;
}

