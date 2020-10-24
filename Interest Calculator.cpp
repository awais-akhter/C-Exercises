/* interest = principal * rate * days / 365  */
/* Develop a program that will input principal, rate and days for several loans, and will calculate and display the simple interest for each loan, using the preceding formula. */

#include <stdio.h>
int main() {
	float principal, rate, interest; //Variables Decleration
	int days, i=1;

	while (i != -1)
	{
		printf("Enter Loan Principal (-1 to end): "); //Principal Input
		scanf("%f", &principal);

		i = (int) principal; //break condition
		if (i == -1)
			break;

		printf("Enter Interest Rate: "); //Interest Rate Input
		scanf("%f", &rate);

		printf("Enter the term of loan in days: "); //Days Input
		scanf("%d", &days);

		interest = principal * rate * days / 365; //interest calculation

		printf("The Interest Charge is: $%.2f\n\n", interest); //Output
	}
	return 0;
}
