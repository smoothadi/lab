#include<stdio.h>
#include<conio.h>
void main()
{
long num;
int dig,sum;
clrscr();
printf("Enter any number: ");
scanf("%ld", &num);
printf("%ld -> ",num);
do
{
sum=0;
while(num!=0)
{
dig=num%10;
sum=sum+dig;
num=num/10;
}
printf("%d -> ",sum);
num=sum;
}
while(num/10!=0);
getch();
}
