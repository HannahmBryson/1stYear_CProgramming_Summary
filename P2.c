/*
 ============================================================================
 Name        : From Set 1 Idea 2
 Author      : Hannah Bryson
 Description : The UN state children are defined as living in over-crowded dwellings when there is a ratio of more than two people per room 
 (excluding bathrooms but including kitchen and living room). The over-crowding ratio is obtained by dividing the total number of household 
 members by the total number of rooms occupied by the household. Thus, a dwelling with two bedrooms, 
 a kitchen and sitting-room would be defined as over-crowded if there were more than eight people living in it. 
 Write a C program that calculates if a child is living in an over-crowded dwelling based on user input from the keyboard. 
 The program should output an indication if the child lives in an over-crowded dwelling or not.
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// Variables 
	float room, people, num; 
	
	//Asking user for input
	printf ("Input rooms in house not including bathroom /n");
	scanf ("%f", &room);

	//Asking user for input
	printf ("Input how many people live in the house /n");
	scanf ("%f", &people);
	
	//Works out how many people per room
	num= people/room; 
	
	//Prints overcrowded if over 2
	
	if(num>2)
	{
		printf ("Dwelling is overcrowded ");
	}
	
	// Prints not overcrowded
	else
		printf ("Dwelling is not overcrowded ");
	
	return 0;
}