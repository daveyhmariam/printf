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
       

        num = _printf("%d\n", INT_MAX);
        num2 = printf("%d\n", INT_MAX);

        printf("%d %d \n", num, num2);
        return (0);
 }