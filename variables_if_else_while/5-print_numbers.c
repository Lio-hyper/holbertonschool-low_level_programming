#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char NUM = '0';

	while (NUM <= '9')
	{
		putchar(NUM);
		NUM++;
	}
	putchar ('\n');
	return (0);
}
