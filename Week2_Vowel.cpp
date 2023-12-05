#include<stdio.h>
int main()
{
char ch;
printf("Enter a character(a-z)");
scanf("%c",&ch);
if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
printf("The character is a vowel");
else
printf("The character is a consonant");
return 0;
}
