
#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 * @num: the decimal number to print as binary
 */

void print_binary(unsigned long int num)
{
	unsigned long int temp;
	int shifts;

	if (num == 0)
	{
		printf("0");
		return;
	}

	for (temp = num, shifts = 0; (temp >>= 1) > 0; shifts++)
		;

	for (; shifts >= 0; shifts--)
	{
		if ((num >> shifts) & 1)
			printf("1");
		else
			printf("0");
	}
}