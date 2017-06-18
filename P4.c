/*
 ============================================================================
 Name        : From Set 2 Idea 2
 Author      : Hannah Bryson
 Description : 

 The Towers of Hanoi*** is a classic problem which can be solved using recursion. 
 Write a C program which demonstrates the problem being solved by printing out the sequence of 
 moves required to move all discs from the source tower to the destination tower.
*** https://en.wikipedia.org/wiki/Tower_of_Hanoi
 
 ============================================================================
 */
 #include <stdio.h>
void MoveTower(int discs, int source, int destination, int spare);

int main(void)
{
	printf("About to calution moves to complete a game with 3 discs\n");	
	MoveTower(3, 1, 2, 3);
	
	printf("About to calution moves to complete a game with 5 discs\n");	
	MoveTower(5, 1, 2, 3);
	
	return 0;
}

void MoveTower(int discs,int source, int destination, int spare)
{
	if (discs>0)
	{
		MoveTower(discs -1, source, spare, destination);
		printf("Move disc from peg %d to peg %d\n", source, destination);
		MoveTower(discs -1, spare, destination, source);
	}
}