#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @binary: string containing the binary number
 *
 * Return: the converted decimal number, or 0 if there is an unconvertible char
 */
unsigned int binary_to_uint(const char *binary)
{
	unsigned int result = 0;
	unsigned int multiplier = 1;
	int len;

	if (binary == NULL)
		return (0);

	for (len = 0; binary[len] != '\0'; len++)
	{
		if (binary[len] != '0' && binary[len] != '1')
			return (0);
	}

	for (len--; len >= 0; len--)
	{
		if (binary[len] == '1')
			result += multiplier;
		multiplier *= 2;
	}

	return (result);
}
