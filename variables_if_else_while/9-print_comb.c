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
	
	while (NUM <= '9')
	{
		putchar(NUM);
		if (NUM < '9')
		{
		putchar(',');
		putchar(' ');
		}
		NUM++;
	}
	putchar ('\n');
	return (0);
}
