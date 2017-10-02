#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float w;
	float t;
	float BMI;

	printf("Please enter your height and weight:");

	scanf_s("%f%f", &t, &w);

	BMI = w / t / t;

	if (BMI < 18.5)
	{
		printf("Underweight:	less than 18.5");
	}

	if (BMI > 18.5 && BMI < 24.9)
	{
		printf("Normal:	between 18.5 and 24.9");
	}

	if( (BMI > 25 && BMI < 29.9)
	{
		printf("Overweight:	between 25 and 29.9");
	}

	if (BMI > 30)
	{
		printf("Obese:	30 or greater");
	}

	system("pause");
	return 0;
}