#include <stdio.h>

/**
 * more_numbers - Prints all single digit numbers of base 10 starting from 0,
 *        only using putchar and without char variables.
 *
 * @num: parameter to be checked
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
int num;

for (num = 0; num < 10; num++)
putchar((num % 10) + '0');

putchar('\n');

return (0);
}
