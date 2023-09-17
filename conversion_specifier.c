#include "main.h"


/**
 * conv_spec - selects a function for a given specifier
 *
 * @format: format string
 * @idx: int pointer to format string index
 * @args: parse arguments from _printf
 *
 * Return: number of printed chracters
*/


int conv_spec(const char *format, int *idx, va_list args)
{
	int find;
	int parse = ++(*idx);
	int printed = 0;
	spec specifier[6] = {   {'c', print_char},
				{'s', print_string},
				{'%', print_percent},
				{'d', print_num},
				{'i', print_num},
				{'b', binary_print}
			 };

	if (format == NULL || format[parse] == '\0')
	return (0);


	for (find = 0; find < 6 && format[parse] != '\0'; find++)
	{
		if (specifier[find].sp == format[parse])
		{
			printed = specifier[find].func(args);
			break;
		}
		else if (find == 5)
		{
			printed += write(1, &(format[parse - 1]), 1);
			printed += write(1, &(format[parse]), 1);
		}
	}
	return (printed);
}
