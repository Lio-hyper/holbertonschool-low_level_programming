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
	int NUM = '0';
	int ABC = 'a';

	while (NUM <= '9')
	{
		putchar(NUM);
		NUM++;
	}
	while (ABC <= 'f')
	{
		putchar(ABC);
		ABC++;
	}
	putchar ('\n');
	return (0);
}
