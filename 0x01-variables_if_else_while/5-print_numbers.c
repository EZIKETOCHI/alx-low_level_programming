#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - returns numbers from 0 to 9
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int num;
	for (num = 0; num <= 9; num++)
		printf("%d", num);
	printf("\n");
	return (0);
}
