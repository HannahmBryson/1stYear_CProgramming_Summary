/*
 ============================================================================
 Name        : From Set 3 Idea 1
 Author      : Hannah Bryson
 Description : 


 Write a C program that creates a two dimensional integer array. The size of the array should be specified by user input. The array should then be filled by prompting the user to enter data (an integer) for each element. It should not be possible to add duplicates to the array.
The program should print the following results:
1. The contents of the array (this should look like a table).
2. The sum of each row.
3. The sum of each column.
4. The sum of all values in the array.
5. The average of each row.
6. The average of each column.
7. The average of the complete array.
8. The frequency of each number which occurs in the array.
9. A random number from the array.
 ============================================================================
 */
#include <stdio.h>
void printArray(const int array2[][], int counter3, int counter2);// Calling functions
double total(const int array2[], int counter2);
double average(const int array2[], int counter2); 

int main(void)
{
	// Variables
	int r,c; 
	int counter;
    double arrayave, arraytotal;
    
	// Asking user input for how big array is
    printf (" Please enter the number of rows?");
    scanf ("%d", r );
    printf (" Please enter the number of columns?");
    scanf ("%d", c );
     const int array[r][c];
	 
	// User input for contents of array
	printf ("Please enter table contents");
    scanf ("%d", array [r] [c]);
    
    // printing of array using function
    printf("The array is:");
    printArray(array, r,c);
    
    //sum of row
    
    for (counter = 0; counter < c; ++counter) {
        printf("The total for row %u is %.2f\n",
            counter, total(array1[counter], r));
        arraytotal = arraytotal + total(array1[counter]);
    }
    
    // sum of columns
    
    for (counter = 0; counter < r; ++counter) {
        printf("The total for row %u is %.2f\n",
            counter, total(array1[counter], c));
        arraytotal = arraytotal + total(array1[counter]);
    }
    // total of array
    
    printf ( "The total for the array is %.2f\n", arraytotal);
        
    // average of each row
    for (counter = 0; counter < c; ++counter) {
        printf("The average for row %u is %.2f\n",
            counter, average(array1[counter], r));
        arrayave= arrayave + average(array1[counter]);
    }
    // average of each column
    
    for (counter = 0; counter < r; ++counter) {
        printf("The average for column %u is %.2f\n",
            counter, average(array1[counter], c));
        arrayave= arrayave + average(array1[counter],);
    }
    // average of complete array
    printf ( "The average for the array is %.2f\n", arrayave);
        
    // frequency of each number
    
    // random number of array
	srand(time (NULL)); /* Using time to get numbers total random */
	printf ("A ramdom array value is %d", songArr[r= 0+(rand () % r)][c= 0+(rand () % c)])// Both r and c will be random
	
    
    return 0;
}
// Function for printing array
void printArray(const int array2[][], int counter3, int counter2)
{
	//Variables
    int i;
    int j;
    // prints in table form
    for (i =0; i < counter3; ++i) {
        //  label for row
        printf("\narray1    [%u]", i);
    
	
        for ( j = 0; j < counter2; ++j)
        { printf("%-5d", array2[i][j]);
        }
    }
}
double total(const int array3[], int counter2)
{
    int i;
    
    int total = 0; // sum of array
    
    for ( i =0; i < counter2; ++i) {
        total += array3[i];
    }
    return total ; // total
}
double average(const int array2[], int counter2)
{
	int i;
	
int total = 0; // sum of array

for ( i =0; i < counter2; ++i) { 
total += array3[i];
}
return (double) total / counter2; // average
} 