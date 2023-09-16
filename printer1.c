#include "main.h"
/**
 * print_char - prints char
 * 
*/
int print_char(va_list args)
{
char buf;
char *str;
int printed;
printed = 0;
buf = va_arg(args, int);
str = &buf;
printed = write(1, str, 1);
return (printed);
}
