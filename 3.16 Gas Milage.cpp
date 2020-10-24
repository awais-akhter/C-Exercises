#include<stdio.h>
int main() {
	float miles=0, gallons=0, t_miles=0, average=0, mil_gal=0;
	int i = 1, count = 0;

	while (i != -1)
	{
		printf("Enter the gallons used: ");
		scanf_s("%f", &gallons);

		i = (int) gallons;
		if (i == -1)
			break;
		else
			count++;

		printf("Enter miles covered: ");
		scanf_s("%f", &miles);
		mil_gal = (float)miles / gallons;

		printf("\nThe miles/gallon for this tank was: %.2f\n\n", mil_gal);
		t_miles += mil_gal;
	
	}
	average = (float)t_miles / count;
	printf("\n\nThe overall average miles/gallons is %.3f", average);


	return 0;
}