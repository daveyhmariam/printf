#include "main.h"
/**
 * _printf - custom printf function
 * @format: format specifier string
 * Return: numbr of printed chars
 *         -1 if fails
*/
int _printf(const char *format, ...)
{
int idx, buf_idx, printedTotal;
va_list args;
char buffer[BUFF_SIZE];
buf_idx = 0;
idx = 0;
printedTotal = 0;
if (format == NULL || format[0] == '\0')
return (printedTotal);
va_start(args, format);
for (; format != NULL && format[idx] != '\0'; idx++)
{
if (format[idx] != '%')
{
if (buf_idx == BUFF_SIZE)
{
printedTotal += print_buf(buffer, &buf_idx);
}
buffer[buf_idx++] = format[idx];
}

if (format[idx] == '%')
{
//write(1," check1 ", 8);
printedTotal += print_buf(buffer, &buf_idx);
printedTotal += conv_spec(format, &idx, args);
}
}
printedTotal += print_buf(buffer, &buf_idx);
return (printedTotal);
}
/**
 * print_buf - prints the buffer
 * @buf_idx - pointer to an int
 * Return: number of printed characters
*/
int print_buf(char *buffer, int *buf_idx)
{
int printed;
printed = 0;
if (buffer != NULL)
printed = write(1, buffer, *buf_idx);
*buf_idx = 0;
return (printed);
}
int main()
{
/*int d = _printf("my name is awit");
int e = printf("my name is awit");
printf("\n%d\n %d", d,e);
int c;
c=(int )write(1, "my name is", 0);*/
char c = 'a';
printf("\n%d", _printf("mynameis %c %c dawit", c, 'b'));
return (0);
}
