#include "main.h"

/**
 * main - prints _putchar, followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char p[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(p[i]);
	}
	_putchar('\n');
	return (0);
}
