#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int integer;

	printf("Enter a integer\n");

	scanf_s("%d", &integer);

	if(integer % 2 == 0)
	{
		printf("The integer is even\n");
	}
	if(integer % 2 == 1)
	{
		printf("The integer is odd\n");
	}
	system("pause");
	return 0;
}