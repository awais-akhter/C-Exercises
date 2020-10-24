/*One large chemical company pays its salespeople on a commission basis. The salespeople receive $200 per week plus 9% of their gross sales for that week. For example, a salesperson who sells $5000 worth of chemicals in a week receives $200 plus 9% of $5000, or a total of $650. */

/*Develop a program that will input each salesperson’s gross sales for last week and will calculate and display that salesperson’s earnings. Process one salesperson's figures at a time.*/

#include<stdio.h>
int main()
{
	float sales, comission = 0, salary = 200;
	int i = 0; //Decleration of variables

	while (i != -1)
	{
		printf("Enter Sales in Dollars (-1 to end): $"); //Getting Input
		scanf_s("%f", &sales);

		i = (int) sales; //break condition
		if (i == -1)
			break;

		comission = (float) sales*0.09; //comission calculation
		
		printf("Salary is: $%.3f\n\n\n", comission + salary); //output
	}
	
	return 0;
}