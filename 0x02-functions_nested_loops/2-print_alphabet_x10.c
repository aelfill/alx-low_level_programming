#include "main.h"
/**
 * print_alphabet_x10 - x10 alphabet
 * Return:void
 */
void print_alphabet_x10(void)
{
	char i;
	char j;
	
	for (j = 1; i <=10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
