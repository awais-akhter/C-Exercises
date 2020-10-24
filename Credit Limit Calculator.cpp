/*Develop a C program that will determine if a department store customer has exceeded the credit limit on a charge account. For each customer, the following facts are available:
a) Account number
b) Balance at the beginning of the month
c) Total of all items charged by this customer this month
d) Total of all credits applied to this customer's account this month
e) Allowed credit limit
The program should input each fact, calculate the new balance (= beginning balance + charges – credits), and determine whether the new balance exceeds the customer's credit limit. For those customers whose credit limit is exceeded, the program should display the customer's account number, credit limit, new balance and the message “Credit limit exceeded.” Here is a sample input/output dialog:*/

#include <stdio.h>
int main() {
	//variables declaration
	float s_bal, n_bal, t_credit, t_charges, c_limit;
	int acc, i=1;

	while (i != 0)
	{
		//Getting Input from the user
		printf("Enter Account No. (-1 to end): "); //account no
		scanf("%d",&acc);
		i = acc;

		if (i == -1) //condition to break the loop
			break;


		printf("Enter begining balance: "); //start balance
		scanf("%f", &s_bal);

		printf("Enter total charges: ");    //charges
		scanf("%f",&t_charges);

		printf("Enter total credit: ");		//credits
		scanf("%f", &t_credit);

		printf("Enter credit limits: ");  //credit limits
		scanf("%f", &c_limit);

		
		n_bal = s_bal + (t_charges - t_credit); //new balance calculation

		if (n_bal > c_limit)   //if credit limit is exceeded.
		{
			printf("\n\nAccount: %d\n", acc);
			printf("Credit Limit: %f\n", c_limit);
			printf("Balance: %f\n", n_bal);
			printf("Credit Limit is Exceeded.\a\n\n");
		}
		printf("\n\n");

	}
	return 0;
	
}