#include<stdio.h>
#include<conio.h>
void str_upr(char sou[])
{
int i=0;
while(sou[i]!='\0')
{
if (sou[i]>=97&sou[i]<=122)
sou[i]-=32;
i++;
}
}
void main()
{
char *a;
clrscr();
printf("enter string ");
gets(a);
str_upr(a);
printf("string is %s",a);
getch();
}