#include<stdio.h>
int main()
{
char ch;
printf("Enter a character");
scanf("%c",&ch);
if(ch>='a'&&ch<='z')
printf("ch is a lowercase letter");
else if(ch>='A'&&ch<='Z')
printf("ch is an uppercase letter");
else
printf("ch is not a letter");
return 0;
}
