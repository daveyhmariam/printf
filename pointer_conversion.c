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
	char *ch = va_arg(args, char *);
	int count, i = 0;

	count = str_len(ch);

	for (; count > -1; count--)
	{
		i += write(1, &ch[count], 1);
	}
	return (i);
}

/**
 * print_pointer - prints string
 *
 * @args: va_list
 *
 * Return: integer
 */

int print_pointer(va_list args)
{
	void *point = va_arg(args, void *);
	int i = 0, count = 0;
	char letter[] = "0123456789abcdef";
	char buffer[BUFF_SIZE];
	unsigned long num = (unsigned long)point;

	if (point == NULL)
	return (write(1, "(nil)", 5));

	do {
		buffer[i] = letter[num % 16];
		num /= 16;
		i++;

	} while (num != 0);

	buffer[i++] = 'x';
	buffer[i] = '0';

	while (i > -1)
	{
		count += write(1, &buffer[i], 1);
		i--;
	}
	return (count);
}
