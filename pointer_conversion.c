#include "main.h"

/**
 * printcaps_string - prints string
 *
 * @args: va_list
 *
 * Return: integer
 */

int printcaps_string(va_list args)
{
	int count = 0, printed = 0;
	char *schar = va_arg(args, char *);

	for (count = 0; schar[count] != '\0'; count++)
	{
		if (((int)schar[count] > 0 && (int)schar[count] < 32)
			|| (int)schar[count] >= 127)
		{
			printed += write(1, "\\0A", 3);
			continue;
		}
		printed += write(1, &schar[count], 1);
	}
	return (printed);
}

/**
 * reverse_string - prints string
 *
 * @args: va_list
 *
 * Return: integer
 */

int reverse_string(va_list args)
{
	char rev[BUFF_SIZE], *ch = va_arg(args, char *);
	int count, i = 0;

	count = str_len(ch);

	for (; count > -1; i++, count--)
	{
		rev[i] = ch[count];
	}
	return (write(1, &rev, i));
}
