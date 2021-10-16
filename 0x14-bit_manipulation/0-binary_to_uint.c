#include "main.h"
/**
 *binary_to_uint -a func that convert binary
 *@b: pointer to binary
 *Return: converted unsigned number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, n = 1, val = 0, end;

	if (!b)
		return (0);
	while (b[i])
		i++;
	end = i - 1;
	while (i > 0)
	{
		if (b[end] == '0' || b[end] == '1')
		{
			if (b[end] == '1')
				val += n;
		}
		else
			return (0);
		end--;
		i--;

		n = n * 2;
	}
	return (val);
}
