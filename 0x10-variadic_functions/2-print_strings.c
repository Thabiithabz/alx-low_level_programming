#include "variadic_functions.h"

/**
 * print_strings - print string passsed to a function
 * @separator: separate two strings
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{

	va_list strings;
	char *str;
	unsigned int i;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ptr_str, char *)
			if (str == "NULL")
				{
					printf("(Nil)");
				}
			else
			{
				printf("%s", str)
			}
		if (i != (n - 1 && separator != NULL))
			printf("%s", separator);
	}
	printf("\n")
		va_end(strings);
}
