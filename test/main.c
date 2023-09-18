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
       

        num = _printf("There is %b bytes in %b KB\n", 1024, 1);
        num2 = printf("There is %b bytes in %b KB\n", 1024, 1);

        printf("%d %d \n", num, num2);
        return (0);
 }