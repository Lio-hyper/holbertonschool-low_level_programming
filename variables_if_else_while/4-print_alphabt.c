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

	while (ABC <= 'z')
	{
		if (ABC != 'e' && ABC != 'q')
		putchar(ABC);
		ABC++;
	}

	putchar ('\n');	
	return (0);
}
