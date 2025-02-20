#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
char string[30];
char *p1,*p2,*p3;
int flag;
cout<<"enter the string : ";
gets(string);
fflush(stdin);
p1 = string;
while(*p1 != 0)
{
p1++;
}
p1--;
p2 = string;
p3 = p1;
while(p3>p2)
{
if(*p3 == *p2)
{
flag = 1;
p2++;
p3--;
}
else
{
flag = 0;
break;
}
}
if(flag == 1)
{
cout<<"Yes,Its a palindrome ";
}
else
{
cout<<"No,It is not a palindrome";
}
getch();
}