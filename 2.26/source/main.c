#include <stdio.h>
#include <stdlib.h>

int main()
{
	int integer1;
	int integer2;

	printf("Enter two integers\n");

	scanf_s("%d %d", &integer1, &integer2);

	if (integer1 % integer2 == 0)
	{
		printf("%d is multiple of the %d\n" , integer1, integer2);
	}
	if (integer1% integer2 != 0)
	{
		printf("%d is not multiple of the %d\n" , &integer1, integer2);
	}
	system("pause");
	return 0;
}
