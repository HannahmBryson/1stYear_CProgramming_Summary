/*
 ============================================================================
 Name        : From Set 1 Idea 1
 Author      : Hannah Bryson
 Description : A charity has teamed up with a local business to raise funds. 
The business has agreed to make a donation based on the number of sales on a particular day. 
For each full euro in sales up to €5000, the charity will receive 5c per euro. For each full euro between €5000 and €10000 in sales, 
the charity will receive 10c per euro. For each full euro in sales over €10000 the charity will receive 15c per euro. 
Write a C program that asks a user to input the amount of sales and then calculates amount the charity will receive. A sample screen would look like:
Input the amount of sales in euros: 5400.56
Amount for charity: 290 Euro
 ============================================================================
 */
#include <stdio.h>

int main(void)
{
	//Variables 	
	float sale, charity;
	
	// Asking the user for input
	printf("Input the amount of sales in euros");
	scanf( "%f", &sale);
	
	// Handles sales under 5000
	if (sale < 5000)
		charity = sale * 0.05;
	else
		charity = 250;
	
	// Handles sales between 5000 and 10000 
	if (sale =< 10000)
	{
	charity += (sale-5000)* 0.1; 
	}
	else 
		charity = charity +500; 	
	
	// Handles sales over 10000
	if (sale > 10000)
	{
	charity = (sale-10000)* 0.15;
	}
	
	// Printing result 
	printf ("Amount for charity: %f Euro" , charity);
	
	return 0;
}