#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	printf("Please enter your values\n");

	scanf_s("%d%d%d%d%d", &num1, &num3, &num2, &num4, &num5);

	num6 = num1 / num3*num2 + num4 + num5;

	printf("Yours cost per day of driving to work is %d",num6);

	system("pause");
	return 0;
}