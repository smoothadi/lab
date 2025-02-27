#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,end,isprime;
clrscr();
printf("Find Prime Number between 1 to:");
scanf("%d",&end);
printf("All the prime numbers between 1 to %d are:\n",end);
for(i=2;i<=end;i++)
{
isprime=1;
for(j=2;j<=i/2;j++)
{
if(i%j==0)
{
isprime=0;
break;
}
}
if(isprime==1)
{
printf("\n%d",i);
}
}
getch();
return 0;
}
