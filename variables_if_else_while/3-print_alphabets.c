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
	char ABC = 'a';
	char abc = 'A';

	while (ABC <= 'z')
	{
		putchar(ABC);
		ABC++;
	}

	while (abc <= 'Z')
	{
		putchar(abc);
		abc++;
	}
	putchar ('\n');
	return (0);
}
