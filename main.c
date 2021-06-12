#include <stdio.h>
//like a bill 
int main(void) {
  //varible declare
 int salary,fuel,food,printing,expense,total_expense;

//Get the salary from user
 printf("Total amount recived as pocket     : ");
 scanf("%d",&salary);

//get the fuel expenses
  printf("Money spent on fuel                : ");
 scanf("%d",&fuel);

//get the food expenses
  printf("Money spent on fuel spent on food  : ");
 scanf("%d",&food); 

//get  the printing expense
 printf("Money spent on printing            : ");
 scanf("%d",&printing);

//get the  other expenses
 printf("other expenses                     : ");
 scanf("%d",&expense);

//calculating the total expense
 total_expense=fuel+food+printing+expense;

//printing seprate line 
 printf("***************************************\n ");
// print the expense
 printf("Total  expenses : %d \n",total_expense);

 //print and calculatingthe saving 
 printf(" Total  saving  : %d \n",(salary-total_expense));

//print the seprate line
 printf("\n***************************************\n ");

  return 0;
}