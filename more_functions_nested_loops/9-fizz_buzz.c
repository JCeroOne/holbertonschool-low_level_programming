#include <stdio.h>

/**
 * main - Runs the program
 * Return: 0 if succesful
 */
int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
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
			printf(i);
		}
		printf(" ");
	}

	return (0);
}
