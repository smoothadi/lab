#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define max_size 5
int queue[max_size], front = -1, rear = -1;
void insert();
void del();
void display();
int main()
{
int choice;
do
{
printf("\n\n ____________QUEUE OPERATIONS_______________\n");
printf("1. Insert \n");
printf("2. Delete \n");
printf("3. Display \n");
printf("4. Exit\n");
printf("___________________________________________\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch (choice)
{
case 1:
insert();
break;
case 2:
del();
break;
case 3:
display();
break;
case 4:
exit(0);
break;
default:
printf("\n Invalid Choice! Please enter (1/2/3/4) \n");
}
}
while (choice != 4);
return 0;
}
void insert()
{
int item;
if (rear == max_size - 1)
{
printf("\n QUEUE OVERFLOW ");
}
else
{
printf("Enter the element to be inserted: ");
scanf("%d", &item);
rear = rear + 1;
queue[rear] = item;
if (front == -1)  
front = 0;
}
}
void del()
{
if (front == -1)
{
printf("\n QUEUE UNDERFLOW ");
}
else
{
printf("\n The deleted element is: %d", queue[front]);
if (front == rear) 
{
front = -1;
rear = -1;
}
else
{
front = front + 1;
}
}
}

void display()
{
int i;
if (front == -1)
{
printf("\n QUEUE IS EMPTY ");
}
else
{
printf("\n The queue elements are: \n");
for (i = front; i <= rear; i++)
{
printf("%d\t", queue[i]);
}
}
}
