#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#define UNUSED (void)
#define BUFF_SIZE 1024
int _printf(const char *format, ...);
int print_buf(char *buffer, int *buf_idx);
int print_string(va_list args);
int str_len(char *str);
int print_percent(va_list args);
int print_num(va_list args);
int binary_print(va_list args);

/**
 * struct conversion_specifier - selects the corrsponding function
 * for given conversion specifier
 *
 * @sp: character
 * @func: function pointer
 *
 **/

typedef struct conversion_specifier
{
char sp;
int (*func)(va_list);
} spec;

/*select function to print args*/
int conv_spec(const char *format, int *idx, va_list args);
/*print char*/

int print_char(va_list args);
#endif
