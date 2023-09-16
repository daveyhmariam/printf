#include "../main.h"

/**
 * main - test
 *
 * Return: 0
 *
 */

 int main()
 {
        int num, num2;


        num = _printf("hello %c  %s %% there\n",'h', "name");
        num2 = printf("hello %c  %s %% there\n", 'h', "name");

        printf("%d %d \n", num, num2);
        return (0);
 }