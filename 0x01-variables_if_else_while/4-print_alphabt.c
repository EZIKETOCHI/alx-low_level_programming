#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns alphabets except q and e
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch = 'a';
	while (ch <= 'z')
	{
		if ((ch != 'e') && (ch != 'z'))
				{
				putchar (ch);

				}
				ch++;
				}
				putchar('\n');
				return (0);
				}