#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#define UNUSED (void)
#define BUFF_SIZE 1024
int _printf(const char *format, ...);
int print_buf(char *buffer, int *buf_idx);
int print_string(va_list args);
int str_len(char *str);
int print_percent(va_list args);

/*selects the corrsponding function
for given conversion specifier*/
/**
 *
 *
 **/
typedef struct conversion_specifier
{
char sp;
int (*func)(va_list);
}spec;

/*select function to print args*/
int conv_spec(const char *, int *, va_list);
/*print char*/

int print_char(va_list args);
#endif