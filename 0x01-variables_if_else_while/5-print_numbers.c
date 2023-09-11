#include <stdio.h>

/**
 * main - Print all single digit numbers of base 10 starting from 0.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + '0');
		digit++;
	}

	putchar('\n');

	return (0);
}
