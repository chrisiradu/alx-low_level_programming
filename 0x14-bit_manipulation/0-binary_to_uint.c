#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: binary
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{

	int len;
	unsigned int sum = 0, mult =1;

	if(!b)
	return (0);

	for (len = 0; b[len];)
	len++;

	for (len -= 1; len >= 0; len--)
	{
	if (b[len] != '0' && b[len] != '1')
	return (0);
	sum += (b[len] != '0' && b[len] != '1')
	return (0);
	sum += (b[len] - '0') * mult;
	mult *= 2;
	}

	return (sum);
}
