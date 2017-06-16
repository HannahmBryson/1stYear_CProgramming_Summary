/*
 ============================================================================
 Name        : From Set 2 Idea 1
 Author      : Hannah Bryson
 Description : 
 Conversion of binary to decimal (base-2 to base-10) numbers and back is an important
concept to understand as the binary numbering system forms the basis for all computer and
digital systems. Using recursive techniques, write a C program to convert a decimal to
binary. To show your understanding and reasoning of the approach, provide a
demonstration of how the conversion works in comments at the start of the program.
A sample screen would look like:
Input a decimal number: 156
Binary number 1 0 0 1 1 1 0 0
 ============================================================================
 */
 
 #include <stdio.h>
 // Function prototypes
 void recvConvert(int x);

 int main(void)
{
	// Varibles
	int x; 
	
	// Asking the user for input
	printf("Input a decimal number:");
	scanf ("%d", &x);
	
	printf("Binary number:");
	// Calling function
	recvConvert(x); 
	
	return 0;
}

void recvConvert(int x)
{
	// Check for base case
	if (x>0)
	{
		//Calling it recursively
		recvConvert(x/2); 
		
		// Printing result  after recursive to use program stack to reverse order of bits
		printf("%d", x%2);
	}
		
	
}