#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int integer1;
	int integer2;
	int	integer3;

	printf("Enter three integers\n");

	scanf( "%d%d%d", &integer1, &integer2, &integer3 );

	if (integer1 > integer2 && integer2 > integer3)
	{
		printf("largest is %d, smallest is %d\n", integer1, integer3);
	}

	if (integer2 > integer3 && integer3 >integer1)
	{
		printf("largest is %d, smallest is %d\n", integer2, integer3);
	}

	if (integer1 > integer3 && integer3 > integer2)
	{
		printf("largest is %d, smallest is %d\n", integer1, integer2);
	}

	if (integer2 > integer3 && integer3 > integer1)
	{
		printf("largest is %d, smallest is %d\n", integer2, integer1);
	}

	if (integer3 > integer2 && integer2 > integer1)
	{
		printf("largest is %d, smallest is %d\n", integer3, integer1);
	}

	if (integer3 > integer1 && integer1 > integer2)
	{
		printf("largest is %d, smallest is %d\n", integer3, integer2);
	}

	system("pause");
	return 0;
}