#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints anything based on the format provided.
 * @format: a list of types of arguments passed to the function.
 */
void print_all(const char *const format, ...)
{
	int i = 0;
	char *str, *sep = "";
	va_list args;

	va_start(args, format);

	if (format != NULL)
	{
		while (format[i] != '\0')
		{
			switch (format[i])
			{
			case 'c':
				printf("%s%c", sep, va_arg(args, int));
				sep = ", ";
				break;
			case 'i':
				printf("%s%d", sep, va_arg(args, int));
				sep = ", ";
				break;
			case 'f':
				printf("%s%f", sep, va_arg(args, double));
				sep = ", ";
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", sep, str);
				sep = ", ";
				break;
			}
			i++;
		}
	}

	printf("\n");
	va_end(args);
}
