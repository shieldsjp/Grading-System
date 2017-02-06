/*--------------------------------------------------------------------------------------------------------------
Author: 			John Shields
Objective:			This program calculates and prints the average of however many grades the user wishes to enter. 
					User input is required and the user must enter at least 2 grades. The grade range is zero to 100 and the program will re-prompt the user if a grade is entered outside of this range.	
					This program will cacluclate all values and print the average of all positive values entered, rounded to the nearest whole number.
					Lastly, an appropriate letter grade will display depending on the grade average.
-----------------------------------------------------------------------------------------------------------------*/
#include <stdio.h>
void main (void)
{
	
/*Variable Declarations and accumulators*/
/*-------------------------------------*/

	int i, grade, numberofgrades = 0;
	float gradeavg, totalgradenumber = 0;
	char c;
	
/*Output display that provides an overall function of this program to the user*/
/*----------------------------------------------------------------------------*/
	
	printf ("This program calculates the average of as many grades you wish to enter.\n\n");
	
/*Created do loop because of unknown iterations - user input*/
/*----------------------------------------------------------*/
	
	do
	{
	printf ("First, enter the number of grades to process: ");
	scanf ("%i", &numberofgrades);
	while ( (c = getchar() != '\n') && c != EOF);
	
	
/*If statement declaring that at least 2 grades should be input by user*/
/*---------------------------------------------------------------------*/

	if (numberofgrades <= 1)
	printf ("*** At least 2 grades must be entered by user! ***\n\n");
} while (numberofgrades <= 1);

/*Based on user input above, user will enter all grades between 0 - 100*/
/*---------------------------------------------------------------------*/

	printf ("\nNow, enter the %i grades to be averaged.\n\n", numberofgrades);
					 	for (i = 1; i <=numberofgrades; ++i) {
	do
	{
	printf ("Enter grade #%i: ", i);
	scanf ("%i", &grade);
	while ( (c = getchar() != '\n') && c != EOF);
	
	if (grade < 0 || grade >= 100)
	printf ("*** Invalid entry. Grade must be 0 to 100. ***\n");
} while (grade < 0 || grade >= 100);

/*Ending accumulators for amount of grades entered and grade*/
/*----------------------------------------------------------*/

totalgradenumber += grade;
gradeavg = totalgradenumber/numberofgrades;
}

/*Printing the average of all grades, rounded to nearest whole number as a float */
/*------------------------------------------------------------------------------*/

printf ("\nThe average of the %i grades entered is %.f", numberofgrades, gradeavg);

/*if and if else statements below determine the letter grade based on the gradeavg*/
/*-------------------------------------------------------------------------------*/

if ( gradeavg >= 90 )
 printf ("\n\nYou have a letter grade of an A\n");
else if ( gradeavg >= 80 && gradeavg <= 89)
 printf ("\n\nYou have a letter grade of an B\n");
else if ( gradeavg >= 70 && gradeavg <= 79)
 printf ("\n\nYou have a letter grade of an C.\n");
else if ( gradeavg >= 60 && gradeavg <= 69)
 printf ("\n\nYou have a letter grade of an D\n");
else if (gradeavg >= 0 && gradeavg <= 59)
printf ("\n\nYou have a letter grade of an F\n");
 
/*The following statement is used to pause the output*/
/*---------------------------------------------------*/
	
 	getchar ();
} /* end main */
