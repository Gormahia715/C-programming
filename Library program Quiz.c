// program to calculate fine for overdue library books
/* Author: Carren cherotich
Reg:CT101/G/22817/24
DATE:29/9/2024
*/
#include<stdio.h>
int main()
{
int bookId,duedate,returndate,dayoverdue;
float finerate,fineamount;

printf("Enter book id:");
scanf("%d",&bookId);
printf("Enter due date:");
scanf("%d",&duedate);
printf("enter return date:");
scanf("%d",&returndate);
dayoverdue=returndate-duedate;
if ("dayoverdue <=7")
{
finerate=20;
}
else if ("dayoverdue <=14")
{
finerate=50; 
}
else 
{
finerate= 100;
}
fineamount=dayoverdue *finerate;
printf("Fine Amount is:%f\n",fineamount);
printf("Book id is:%d\n",bookId);
printf("Due date is:%d\n",duedate);
printf("return date is:%d\n",returndate);
printf("days overdue is:%d\n",dayoverdue);
printf("Fine Rate is:%f",finerate);
return 0;
}


