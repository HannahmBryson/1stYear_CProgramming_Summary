/*
 ============================================================================
 Name        : From Set 3 Idea 2
 Author      : Hannah Bryson
 Description : 

Write a C program which is used to keep track of the number of people passing a turn style at the local stadium. 
The program should have four functions, one which is called when a person enters the stadium and one which is called 
when a person leaves the stadium. When a person leaves, they cannot re-enter the stadium. It costs €20 for a ticket 
to concert so a function should keep a track of total amount of money that has been taken and print that to the screen.
 The final function should report the current number of people at the concert. Provide test code in the main function 
 to demonstrate the program. The program must demonstrate the use of a global variable and a local static variable.
 ============================================================================
 */
 #include <stdio.h>
 
 #define TERM_PRORAM 3
int numpeople;
int entry();
int exit();
void people(); 
int money();

int main(void)
{
	int input;
	printf("input 3 to end program");
	while(true)
	{
		printf ("What action would yo like to do?\n1: enter\n2: Exit|n3:3 Stop ?");
		scanf ("d%", &input);
		switch (input)
		{
			case 1:
			entry(i);
			break;
		
			case 2:
			exit (i);
			break;
			
			case 2:
			printf ("The concert is now over and we made £ %d", money(0));
			break;
			
			default:
			printf("Input invaild please put a number in");
			break;
		}
	}
}
int entry()
{
	money();
	numpeople ++;
	people();
}
int exit()
{
	numpeople --;
	people();
}
void people ()
{
	printf ("the current people in the stadium are %d", numpeople);
}

int money(int delta)
{
	static money = 0;
	money += delta;
	return money;
}