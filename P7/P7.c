/*
 ============================================================================
 Name        : From Set 4 Idea 1
 Author      : Hannah Bryson
 Description : 
Adapt the C Program which you wrote in Question 3 to consider an additional horse which has a new set of rules as outlined below.
A. 10% of the time, the horse will progress at super speed (4 spaces).
B. 40% of the time, the horse will only progress 2 spaces.
C. 20% of the time, the horse will progress only 1 space.
D. 10% of the time, the horse will stall and not move at all.
E. 20% of the time, the horse will roll backwards 2 spaces.
Additionally, the race track has a number of jumps/fences. 
If a horse lands on a jump/fence then they must return to the start of the race track and start again. 
The jumps are located at positions/spaces 5, 25, 50 and 75. The program should print out ‘Horse X hit a fence’ when a horse lands on a jump/fence.
 
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// function prototypes
void movejockeyA( int *jockeyA);
void movejockeyB (int *jockeyB);
void movejockeyC (int *jockeyC);
void printCurrentPositions(int,int);

int main()
{
   srand(time(NULL));

   int jockeyA = 1; // jockeyA current position
   int jockeyB = 1; // jockeyB  current position
   int jockeyC = 1; // jockeyC  current position
   int counter = 0; // counter for the for loop controling the race.


   puts("The Race has started");

   // loop through the progress on the track
   while (jockeyA != 100 && jockeyB != 100 && jockeyC != 100) 
   { //neither horse has reached the end of the track

	//call functions to move horses on the track and print current positions
    movejockeyA( &jockeyA);
	movejockeyB (&jockeyB);
	movejockeyB (&jockeyC);
    printCurrentPositions(jockeyA, jockeyB, jockeyC);
    counter++ ;
   }

   // determine the winner and print message - one horse/jockey has passed the end as it is outside the loop.
   if (jockeyA > jockeyB && jockeyA > jockeyC) {
       printf ("JockeyA is the winner\n");//print the outcome
   }

   if (jockeyA < jockeyB && jockeyC < jockeyB) {
        printf ("JockeyB is the winner\n");//print the outcome
   }
   if (jockeyA < jockeyC && jockeyB < jockeyC) {
       printf ("JockeyA is the winner\n");//print the outcome
   }
   else {
     printf ("The race is a draw\n");//print the outcome
   }

   printf("iteration: %u", counter);
}
// progress for Jockey A
void movejockeyA( int *jockeyAPtr)
{
int x;
	x= 1+(rand () % 10); // Using time to get numbers total random

	printf("Jockey A random : %d \n", x);// determine progress

   if (x >= 1 && x <= 5) { // full speed 50% of the time
      *jockeyAPtr += 2;
   }
   if (x ==6) { // 10% of the time, the horse will only progress 1 space
      *jockeyAPtr += 1;
   }
   if (x ==7) { // 10% of the time, the horse will only progress 3 spaces.
      *jockeyAPtr += 3;
   }
   if (x == 8) { // 10% of the time, the horse will stall and not move at all.
      *jockeyAPtr += 0;
   }
   if (x >= 9 && x <= 10) { // 20% of the time, the horse will roll backwards 2 spaces.
      *jockeyAPtr -= 2;
   }
   
  // Creating fences
  if (*jockeyAPtr == 5) {
      *jockeyAPtr = 1;
	  printf("Horse A hit a fence");
   }
   if (*jockeyAPtr ==25) {
      *jockeyAPtr = 1;
	  printf("Horse A hit a fence");
   }
  if (*jockeyAPtr ==50) {
    *jockeyAPtr = 1;
	printf("Horse A hit a fence");
   }
   if (*jockeyAPtr ==75) {
    *jockeyAPtr = 1;
	printf("Horse A hit a fence");
   }
   
    // check boundaries

   if (*jockeyAPtr < 1) {
      *jockeyAPtr = 1;
   }
   if (*jockeyAPtr > 100) {
      *jockeyAPtr = 100;
   }
}
// progress for Jockey B
void movejockeyB( int *jockeyBPtr)
{
int x;
x= 1+(rand () % 10); // Using time to get numbers total random

	printf("Jockey B random : %d \n", x);// determine progress

   if (x >= 1 && x <= 5) { // full speed 50% of the time
      *jockeyBPtr += 2;
   }
   if (x == 6) { // 10% of the time, the horse will only progress 1 space
      *jockeyBPtr += 1;
   }
   if (x ==7) { // 10% of the time, the horse will only progress 3 spaces.
      *jockeyBPtr += 3;
   }
   if (x == 8) { // 10% of the time, the horse will stall and not move at all.
      *jockeyBPtr += 0;
   }
   if (x >= 9 && x <= 10) { // 20% of the time, the horse will roll backwards 2 spaces.
      *jockeyBPtr -= 2;
   }
   // Creating fences
  if (*jockeyBPtr == 5) {
      *jockeyBPtr = 1;
	  printf("Horse B hit a fence");
   }
   if (*jockeyBPtr ==25) {
      *jockeyBPtr = 1;
	  printf("Horse B hit a fence");
   }
  if (*jockeyBPtr ==50) {
    *jockeyBPtr = 1;
	printf("Horse B hit a fence");
   }
   if (*jockeyBPtr ==75) {
    *jockeyBPtr = 1;
	printf("Horse B hit a fence");
   }
     // check boundaries

   if (*jockeyBPtr < 1) {
      *jockeyBPtr = 1;
   }
   if (*jockeyBPtr > 100) {
      *jockeyBPtr = 100;
}

}
// progress for Jockey C
void movejockeyC( int *jockeyCPtr)
{
int x;
	x= 1+(rand () % 10); // Using time to get numbers total random

	printf("Jockey C random : %d \n", x);// determine progress

   if (x >= 1 && x <= 4) { // 40% of the time, the horse will only progress
      *jockeyCPtr += 2;
   }
   if (x ==5) { //10% of the time, the horse will progress at super speed (4 spaces)
      *jockeyCPtr += 4;
   }
   if (x >= 6 && x <= 7) { // 20% of the time, the horse will roll backwards 2 spaces
      *jockeyCPtr += 3;
   }
   if (x == 8) { // 10% of the time, the horse will stall and not move at all.
      *jockeyCPtr += 0;
   }
   if (x >= 9 && x <= 10) { // 20% of the time, the horse will progress only 1 space
      *jockeyCPtr += 1;
   }
   // Creating fences
  if (*jockeyCPtr == 5) {
      *jockeyCPtr = 1;
	  printf("Horse C hit a fence");
   }
   if (*jockeyCPtr ==25) {
      *jockeyCPtr = 1;
	  printf("Horse C hit a fence");
   }
  if (*jockeyCPtr ==50) {
    *jockeyCPtr = 1;
	printf("Horse C hit a fence");
   }
   if (*jockeyCPtr ==75) {
    *jockeyCPtr = 1;
	printf("Horse C hit a fence");
   }
     // check boundaries

   if (*jockeyCPtr < 1) {
      *jockeyCPtr = 1;
   }
   if (*jockeyCPtr > 100) {
      *jockeyCPtr = 100;
   }
}

// display new position each time there is a move.
void printCurrentPositions(int jockeyA, int jockeyB, int jockeyC)
{
    // loop through race
   for ( int count = 1; count <= 100; ++count)
   {

   // print current leader
      if (count == jockeyA && count == jockeyB && count == jockeyC )
	  {
         printf("%s",  "Tie!!");
      }
      else if (count == jockeyB) {
         printf ("B\n");
      }
      else if (count == jockeyA) {
        printf ("A\n");
      }
	  else if (count == jockeyC) {
        printf ("C\n");
      }
      else {
         printf("%s", " ");  //print a space if the the postion of A or B is not at the count.
      }
   }

   puts("");
}