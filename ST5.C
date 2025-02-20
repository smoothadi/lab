#include<stdio.h>
#include<conio.h>
int stack[100],choice,n,top,x,i;
void push(void);
void pop(void);
void display(void);
int main()
{
clrscr();
top = -1;
printf("\n Enter the size of stack [max = 100] :");
scanf("%d",&n);
printf("\n Stack operation using array " );
printf("\n \t __________________________________");
printf("\n\t 1.push\n\t 2.pop\n\t 3.display\n\t 4.exit");
do
{
printf("\n Enter the choice : ");
scanf("%d",&choice);
switch(choice)
{
case 1:
{
push();
break;
}
case 2:
{
pop();
break;
}
case 3:
{
display();
break;
}
case 4:
{
printf("\n\t EXIT POINT ");
break;
}
default:
{
printf("\n\t PLease enter a valid choicr(1/2/3/4) ");
}
}
}
while(choice != 4);
return 0;
}
void push()
{
if(top >= n-1)
{
printf("\n\t STATCK IS OVERFLOW ");
}
else
{
printf("Enter the value to be pushed : ");
scanf("%d",&x);
top++;
stack[top] = x;
}
}
void pop()
{
if(top<= -1)
{
printf("\n\t STACK IS UNDERFLOW");
}
else
{
printf("\n\t The popped element is %d ",stack[top]);
top--;
}
}
void display()
{	

if(top>=0)
{
printf("\n THE ELEMENT IN THE STACK \n");
for(i = top;i>= 0;i--)
printf("\n %d",stack[i]);
}
else
{
printf("\n THE STACK IS EMPTY ");
}
}