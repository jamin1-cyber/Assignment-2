//a program to calculate the electric bill according to unit consumed 

#include <stdio.h>
int main(){
//declaration of variables 

int customer_ID;//variable for id
char customer_name[50];//variable for name
float consumed_units;//variable for units consumed 

//prompting the user to enter customer id
printf("Enter customer's ID : ");
scanf("%d",&customer_ID);

//prompting the user to enter customer name
printf("Enter customer's name :");
scanf("%s",&customer_name);

//prompting the user to enter unit consumed 
printf("Enter units consumed :");
scanf("%f",&consumed_units);

//we declare variable for charges consumed by the customer 
float bill;

//using if...else statement to calculate the charges as per unit consumed 
//unit equals or greater than 199
if (consumed_units <= 199)
//this will calculate cost of units consumed 
bill=consumed_units * 1.20;
//printf("%f",charges);

else if (consumed_units >= 200 && consumed_units <400)
bill=consumed_units * 1.50;
//printf("%f",charges);

else if (consumed_units >= 400 && consumed_units < 600)
bill=consumed_units * 1.80;

else if (consumed_units >=600)
bill=consumed_units * 2.00;

//printf("%f",bill);

float sure_charge,totalpay;

if (bill >400)
sure_charge=bill * 0.15; 
totalpay=sure_charge + bill;

printf("customer ID :%d\n",customer_ID);
printf("customer_name :%s\n",customer_name);
printf("units_consumed :%.2f\n",consumed_units);
printf("Customer Bill :%.2f\n",bill);
printf("The total to pay :%.2f\n",totalpay);

return 0;
}