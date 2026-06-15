#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Prints the entire alphabet in lower case.
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
