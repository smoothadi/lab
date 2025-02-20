#include <stdio.h>
#include <conio.h>

int main() {int st, drawing, chemistry, math, c, total;
float percentage;
clrscr(); // Clear screen (Remove this if it causes issues)
printf("\nEnter marks in:\n\n");
printf("ST = ");
scanf("%d", &st);
printf("Drawing = ");
scanf("%d", &drawing);
printf("Chemistry = ");
scanf("%d", &chemistry);
printf("Math = ");
scanf("%d", &math);
printf("C = ");
scanf("%d", &c);
total = math + st + chemistry + drawing + c;
percentage = ((float)total / 500) * 100;
if (st < 40 || chemistry < 40 || math < 40 || drawing < 40 || c < 40)
printf("\nRESULT: FAIL\n");
else
printf("\nRESULT: PASS\n");
printf("Percentage: %.2f%%\n", percentage);
printf("Total :%d",total);
printf("\nNOTE: Total marks for each subject is 100, making the total 500.\n");
getch(); 
return 0;
}
