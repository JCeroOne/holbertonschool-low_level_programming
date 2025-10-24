#include <stdio.h>

/**
 * main - Runs the program
 * Return: 0 if succesful
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			if (i % 3 == 0)
			{
				printf("Fizz");
			}
			if (i % 5 == 0)
			{
				printf("Buzz");
			}
		}
		else
		{
			printf("%d", i);
		}
		if (i < 100)
			printf(" ");
		else
			printf("\n");
	}

	return (0);
}
