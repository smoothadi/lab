#include<stdio.h>
#include<conio.h>
void main()
{
int arr1[50],arr2[50],i,j,k,size1,size2,merge[100],size;
clrscr();
printf("Enter array 1 size : ");
scanf("%d",&size1);
printf("Enter array 1 element : ");
for(i=0;i<size1;i++)
{
scanf("%d",&arr1[i]);
}
printf("Enter array 2 size : ");
scanf("%d",&size2);
printf("Enter array 2 element : ");
for(j=0;j<size2;j++)
{
scanf("%d",&arr2[j
]);
}
for(i=0;i<size1;i++)
{
merge[i] = arr1[i];
}
size = size1 + size2;
for(i=0,k=size1;k<size&&i<size2;i++,k++)
{
merge[k] = arr2[i];
}
printf("now thw new array after merging is : \n");
for(i=0;i<size;i++)
{
printf(" %d ", merge[i]);
}
getch();
}
