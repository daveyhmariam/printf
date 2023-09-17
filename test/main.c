#include "../main.h"
#include <limits.h>

/**
 * main - test
 *
 * Return: 0
 *
 */

 int main()
 {
        int num, num2;
       long int res = (INT_MAX * 2L);

        num = _printf("%b + %b = %b\n", INT_MAX, INT_MAX, res);
        num2 = printf("%b + %b = %b\n", INT_MAX, INT_MAX, res);

        printf("%d %d \n", num, num2);
        return (0);
 }