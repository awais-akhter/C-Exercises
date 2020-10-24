/*Drivers are concerned with the mileage obtained by their automobiles. One driver has kept track of several tankfuls of gasoline by recording miles driven and gallons used for each tankful. Develop a program that will input the miles driven and gallons used for each tankful. The program should calculate and display the miles per gallon obtained for each tankful. After processing all input information, the program should calculate and print the combined miles per gallon obtained for all tankfuls.*/
// C Code
#include<stdio.h>
int main() {
	float miles=0, gallons=0, t_miles=0, average=0, mil_gal=0; //Declaration of Variables
	int i = 1, count = 0;

	while (i != -1)
	{
		printf("Enter the gallons used: ");
		scanf_s("%f", &gallons); //Gallon Input

		i = (int) gallons;
		if (i == -1) //loop break condition
			break; 
		else
			count++;

		printf("Enter miles covered: ");
		scanf_s("%f", &miles); //miles input
		
		mil_gal = (float)miles / gallons; //calculation of miles/gallon

		printf("\nThe miles/gallon for this tank was: %.2f\n\n", mil_gal);
		t_miles += mil_gal; //total miles/gallon
	
	}
	average = (float)t_miles / count; //average of total miles/gallon
	printf("\n\nThe overall average miles/gallons is %.3f", average);


	return 0;
}
